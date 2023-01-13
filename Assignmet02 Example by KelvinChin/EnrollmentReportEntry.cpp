#include "EnrollmentReportEntry.h"

#include <iostream>

EnrollmentReportEntry::EnrollmentReportEntry(std::vector<Course> *courses)
{
    this->courses = courses;
}

void EnrollmentReportEntry::showUI()
{
    std::cout << "Course report" << std::endl;
    std::cout << "---" << std::endl;

    if (courses->empty()) {
        std::cout << "No course avaliable" << std::endl;
        return;
    }

    for (Course &course : *courses) {
        std::cout << "\n" << course.courseCode << " - " << course.courseName << std::endl;
        if (course.students.empty()) {
            std::cout << "No students" << std::endl;
        } else {
            // for (int i = 0; i < course.students.size(); i++)
            for (auto student = course.students.begin(); student != course.students.end();
                 student++) {
                // Student& student = course.students[i];
                auto i = student - course.students.begin();
                std::cout << i + 1 << ". " << student->studentName << " (" << student->studentNumber
                          << ")" << std::endl;
            }
        }
    }
}
