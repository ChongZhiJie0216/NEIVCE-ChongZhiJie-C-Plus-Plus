#include "DeleteStudentRecord.h"

#include <iostream>
#include <algorithm>

using namespace std;

DeleteStudentRecord::DeleteStudentRecord(vector<Course>* courses)
{
    this->courses = courses;
}

void DeleteStudentRecord::showUI()
{
    if (courses->empty()) {
        cout << "No courses avaliable" << endl;
        return;
    }

    string courseCode;
    cout << "Enter course code: ";
    getline(cin, courseCode);

    auto courseResult = find_if(courses->begin(), courses->end(), [&](Course& course) {
        return course.courseCode == courseCode;
        });

    if (courseResult == courses->end()) {
        cout << "Course not found" << endl;
        return;
    }

    if (courseResult->students.empty()) {
        cout << "No student enrolled this course";
        return;
    }

    string studentNumber;
    cout << "Student number: ";
    getline(cin, studentNumber);

    auto studentResult =
        find_if(courseResult->students.begin(), courseResult->students.end(),
            [&](Student& student) { return student.studentNumber == studentNumber; });

    if (studentResult == courseResult->students.end()) {
        cout << "Student not found" << endl;
        return;
    }

    cout << "A reminder, student " << studentResult->studentNumber << ": "
        << studentResult->studentName << endl;
    cout << "Are you sure to delete? (y/N): ";
    string confirmation;
    getline(cin, confirmation);

    if (confirmation != "y") return;

    courseResult->students.erase(studentResult);
    cout << "Student removed" << endl;
}
