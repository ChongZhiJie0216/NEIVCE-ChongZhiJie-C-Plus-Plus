#include "DeleteCourseRecord.h"

#include <iostream>

using namespace std;


DeleteCourseRecord::DeleteCourseRecord(vector<Course>* courses)
{
    this->courses = courses;
}

void DeleteCourseRecord::showUI()
{
    if (courses->empty()) {
        cout << "No courses to delete" << endl;
        return;
    }

    cout << "Enter Course Code: ";
    string courseCode;
    getline(cin, courseCode);

    int toDelete = -1;
    for (int i = 0; i < courses->size(); i++) {
        if ((*courses)[i].courseCode == courseCode) {
            toDelete = i;
            break;
        }
    }

    if (toDelete < 0) {
        cout << "Course not exists" << endl;
        return;
    }

    cout << "A reminder, total of num: " << (*courses)[toDelete].students.size() << endl;
    cout << "Sure to delete?(y/N): ";
    string confirmation;
    getline(cin, confirmation);

    if (confirmation != "y") return;

    courses->erase(courses->begin() + toDelete);
    cout << "course deleted" << endl;
}
