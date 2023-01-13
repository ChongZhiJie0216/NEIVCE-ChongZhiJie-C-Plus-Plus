#include "DeleteStudentRecord.h"

#include <iostream>
#include <algorithm>

DeleteStudentRecord::DeleteStudentRecord(std::vector<Course> *courses)
{
    this->courses = courses;
}

void DeleteStudentRecord::showUI()
{
    if (courses->empty()) {
        std::cout << "No courses avaliable" << std::endl;
        return;
    }

    std::string courseCode;
    std::cout << "Enter course code: ";
    std::getline(std::cin, courseCode);

    auto courseResult = std::find_if(courses->begin(), courses->end(), [&](Course &course) {
        return course.courseCode == courseCode;
    });

    if (courseResult == courses->end()) {
        std::cout << "Course not found" << std::endl;
        return;
    }

    if (courseResult->students.empty()) {
        std::cout << "No student enrolled this course";
        return;
    }

    std::string studentNumber;
    std::cout << "Student number: ";
    std::getline(std::cin, studentNumber);

    auto studentResult =
            std::find_if(courseResult->students.begin(), courseResult->students.end(),
                         [&](Student &student) { return student.studentNumber == studentNumber; });

    if (studentResult == courseResult->students.end()) {
        std::cout << "Student not found" << std::endl;
        return;
    }

    std::cout << "A reminder, student " << studentResult->studentNumber << ": "
              << studentResult->studentName << std::endl;
    std::cout << "Are you sure to delete? (y/N): ";
    std::string confirmation;
    std::getline(std::cin, confirmation);

    if (confirmation != "y") return;

    courseResult->students.erase(studentResult);
    std::cout << "Student removed" << std::endl;
}
