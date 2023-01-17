#include "StudentRegistrationEntry.h"

#include <iostream>
#include <numeric>

using namespace std;

StudentRegistrationEntry::StudentRegistrationEntry(vector<Course>* courses)
{
    this->courses = courses;
}

void StudentRegistrationEntry::showUI()
{
    Student newStudent;
    string courseCode;
    bool hasCourse = false;
    Course* selectedCourse = nullptr;

    cout << "Enter Course Code: ";
    getline(cin, courseCode);

    for (Course& course : *courses) {
        if (course.courseCode == courseCode) {
            hasCourse = true;
            selectedCourse = &course;
            break;
        }
    }

    if (!hasCourse) {
        cout << "Course " << courseCode << " Not found, Please Try Again" << endl;
        return;
    }

    cout << "Enter Student Name: ";
    getline(cin, newStudent.studentName);
    cout << "Enter Student Number: ";
    getline(cin, newStudent.studentNumber);

    for (Student& student : selectedCourse->students) {
        if (student.studentNumber == newStudent.studentNumber) {
            cout << "Student with number already exists" << endl;
            return;
        }
    }

    selectedCourse->students.push_back(newStudent);

    cout << "Recorded" << endl;
    cout << "---" << endl;
    cout << "Course code: " << courseCode << endl;
    cout << "Student name: " << newStudent.studentName << endl;
    cout << "Student Number: " << newStudent.studentNumber << endl;
    cout << "Total Number: " << selectedCourse->students.size() << endl;

    int totalStudent =
        accumulate(courses->begin(), courses->end(), 0,
            [&](int total, Course& cur) { return cur.students.size() + total; });

    cout << "Total Student: " << totalStudent << endl;
}
