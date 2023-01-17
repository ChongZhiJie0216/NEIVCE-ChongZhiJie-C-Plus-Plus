#include "CourseEntry.h"
#include <iostream>
#include <string>

using namespace std;


CourseEntry::CourseEntry(vector<Course>* courses)
{
    this->courses = courses;
}

void CourseEntry::showUI()
{
    Course course;
    cout << "Enter Course Code: ";
    getline(cin, course.courseCode);

    cout << "Enter Course Name: ";
    getline(cin, course.courseName);

    courses->push_back(course);

    cout << "The record has been successfully entered" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Course Code: " << course.courseCode << endl;
    cout << "Course Name: " << course.courseName << endl;
}
