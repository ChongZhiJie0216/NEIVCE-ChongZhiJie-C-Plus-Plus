#include "StudentRegEntry.h"

#include <iostream>
#include <numeric>

StudentRegEntry::StudentRegEntry(std::vector<Course> *courses)
{
    this->courses = courses;
}

void StudentRegEntry::showUI()
{
    Student newStudent;
    std::string courseCode;
    bool hasCourse = false;
    Course *selectedCourse = nullptr;

    std::cout << "Enter Course Code: ";
    std::getline(std::cin, courseCode);

    for (Course &course : *courses) {
        if (course.courseCode == courseCode) {
            hasCourse = true;
            selectedCourse = &course;
            break;
        }
    }

    if (!hasCourse) {
        std::cout << "Course " << courseCode << " not found, pls try again" << std::endl;
        return;
    }

    std::cout << "Enter Student Name: ";
    std::getline(std::cin, newStudent.studentName);
    std::cout << "Enter Student Number: ";
    std::getline(std::cin, newStudent.studentNumber);

    for (Student &student : selectedCourse->students) {
        if (student.studentNumber == newStudent.studentNumber) {
            std::cout << "Student with number already exists" << std::endl;
            return;
        }
    }

    selectedCourse->students.push_back(newStudent);

    std::cout << "Recorded" << std::endl;
    std::cout << "---" << std::endl;
    std::cout << "Course code: " << courseCode << std::endl;
    std::cout << "Stud name: " << newStudent.studentName << std::endl;
    std::cout << "stud numb: " << newStudent.studentNumber << std::endl;
    std::cout << "Total num: " << selectedCourse->students.size() << std::endl;

    int totalStudent =
            std::accumulate(courses->begin(), courses->end(), 0,
                            [&](int total, Course &cur) { return cur.students.size() + total; });

    // for (Course& course : *courses)
    //{
    //     totalStudent += course.students.size();
    // }

    std::cout << "total student: " << totalStudent << std::endl;
}
