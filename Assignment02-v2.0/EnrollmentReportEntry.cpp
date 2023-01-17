#include "EnrollmentReportEntry.h"

#include <iostream>

using namespace std;


EnrollmentReportEntry::EnrollmentReportEntry(vector<Course>* courses)
{
    this->courses = courses;
}

void EnrollmentReportEntry::showUI()
{
    cout << "Course report" << endl;
    cout << "---" << endl;

    if (courses->empty()) {
        cout << "No course Available" << endl;
        return;
    }

    for (Course& course : *courses) {
        cout << "\n" << course.courseCode << " - " << course.courseName << endl;
        if (course.students.empty()) {
            cout << "No Students" << endl;
        }
        else {
            // for (int i = 0; i < course.students.size(); i++)
            for (auto student = course.students.begin(); student != course.students.end();
                student++) {
                // Student& student = course.students[i];
                auto i = student - course.students.begin();
                cout << i + 1 << ". " << student->studentName << " (" << student->studentNumber
                    << ")" << endl;
            }
        }
    }
}
