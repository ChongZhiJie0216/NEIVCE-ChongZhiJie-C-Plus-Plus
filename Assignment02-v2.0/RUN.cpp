#include <iostream>
#include <vector>

#include "Entry.h"
#include "CourseEntry.h"
#include "StudentRegistrationEntry.h"
#include "DeleteCourseRecord.h"
#include "DeleteStudentRecord.h"
#include "EnrollmentReportEntry.h"

#include "Course.h"

using namespace std;

bool runner(vector<Course>& courses) {///Menu
    cout << "" << endl;
    cout << "NEIVCE Course and Student Enrollment System" << endl;
    cout << "1.Course Entry" << endl;
    cout << "2.Student Registration Entry" << endl;
    cout << "3.Delete Course Record" << endl;
    cout << "4.Delete Student Record" << endl;
    cout << "5.Course Enrollment Report" << endl;
    cout << "0.Exit" << endl;
    cout << "" << endl;
    
    cout << "Enter Option(0-5):";
    int option = 0;
    cin >> option;
    cin.clear();
    cin.ignore();

    Entry* entry = nullptr;
    CourseEntry courseEntry(&courses);
    StudentRegistrationEntry studentRegistrationEntry(&courses);
    DeleteCourseRecord deleteCourseRecord(&courses);
    DeleteStudentRecord deleteStudentRecord(&courses);
    EnrollmentReportEntry enrollmentReportEntry(&courses);

    switch (option) {
    case 1:
        entry = &courseEntry;
        break;
    case 2:
        entry = &studentRegistrationEntry;
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
        cout << "System Exits, Thank You." << endl;
        return false;
    default:
        cout << "Invalid code, Please Try Again" << endl;
        return true;
    }
    entry->showUI();///Show Menu Functions
    return true;
}

int main()
{
    vector<Course> courses;///Main Array List
    bool isRunning = true;

    while (isRunning) {
        if (!runner(courses))
            isRunning = false;
        else
            cout << "\n\n";
    }
    return 0;
}