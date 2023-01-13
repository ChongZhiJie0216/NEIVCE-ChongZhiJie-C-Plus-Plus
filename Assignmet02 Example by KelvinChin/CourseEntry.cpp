#include "CourseEntry.h"
#include <iostream>
#include <string>

CourseEntry::CourseEntry(std::vector<Course> *courses)
{
    this->courses = courses;
}

void CourseEntry::showUI()
{
    Course course;
    std::cout << "Enter Course Code: ";
    std::getline(std::cin, course.courseCode);

    std::cout << "Enter Course Name: ";
    std::getline(std::cin, course.courseName);

    courses->push_back(course);

    std::cout << "The record has been successfully entered" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Course Code: " << course.courseCode << std::endl;
    std::cout << "Course Name: " << course.courseName << std::endl;
}
