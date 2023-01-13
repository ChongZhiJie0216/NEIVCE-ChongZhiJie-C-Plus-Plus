#include <iostream>
#include <vector>

#include "Entry.h"
#include "CourseEntry.h"
#include "StudentRegEntry.h"
#include "DeleteCourseRecord.h"
#include "DeleteStudentRecord.h"
#include "EnrollmentReportEntry.h"

#include "Course.h"

bool runner(std::vector<Course> &courses)
{
    std::cout << "NEIVCE Course and Student Enrolment System" << std::endl;
    std::cout << "1.Course Entry" << std::endl;
    std::cout << "2.Student Registration Entry" << std::endl;
    std::cout << "3.Delete Course Record" << std::endl;
    std::cout << "4.Delete Student Record" << std::endl;
    std::cout << "5.Course Enrolment Report" << std::endl;
    std::cout << "0.Exit" << std::endl;

    std::cout << "\n\nEnter Option: ";

    int option = 0;
    std::cin >> option;
    std::cin.clear();
    std::cin.ignore();

    Entry *entry = nullptr;
    CourseEntry courseEntry(&courses);
    StudentRegEntry studentRegEntry(&courses);
    DeleteCourseRecord deleteCourseRecord(&courses);
    DeleteStudentRecord deleteStudentRecord(&courses);
    EnrollmentReportEntry enrollmentReportEntry(&courses);

    switch (option) {
    case 1:
        entry = &courseEntry;
        break;
    case 2:
        entry = &studentRegEntry;
        break;
    case 3:
        entry = &deleteCourseRecord;
        break;
    case 4:
        entry = &deleteStudentRecord;
        break;
    case 5:
        entry = &enrollmentReportEntry;
        break;
    case 0:
        std::cout << "System exits, thank you." << std::endl;
        return false;
    default:
        std::cout << "Invalid code, pls try agian" << std::endl;
        return true;
    }

    entry->showUI();

    return true;
}

int main()
{
    std::vector<Course> courses;
    bool isRunning = true;

    while (isRunning) {
        if (!runner(courses))
            isRunning = false;
        else
            std::cout << "\n\n";
    }

    return 0;
}
