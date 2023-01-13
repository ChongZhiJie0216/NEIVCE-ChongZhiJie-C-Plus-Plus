#include "DeleteCourseRecord.h"

#include <iostream>

DeleteCourseRecord::DeleteCourseRecord(std::vector<Course> *courses)
{
    this->courses = courses;
}

void DeleteCourseRecord::showUI()
{
    if (courses->empty()) {
        std::cout << "No courses to delete" << std::endl;
        return;
    }

    std::cout << "Enter Course Code: ";
    std::string courseCode;
    std::getline(std::cin, courseCode);

    int toDelete = -1;
    for (int i = 0; i < courses->size(); i++) {
        if ((*courses)[i].courseCode == courseCode) {
            toDelete = i;
            break;
        }
    }

    if (toDelete < 0) {
        std::cout << "Course not exists" << std::endl;
        return;
    }

    std::cout << "A reminder, total of num: " << (*courses)[toDelete].students.size() << std::endl;
    std::cout << "Sure to delete?(y/N): ";
    std::string confirmation;
    std::getline(std::cin, confirmation);

    if (confirmation != "y") return;

    courses->erase(courses->begin() + toDelete);
    std::cout << "course deleted" << std::endl;
}
