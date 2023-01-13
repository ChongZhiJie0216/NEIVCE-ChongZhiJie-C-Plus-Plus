#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include "Menu.h"
#include "CourseCode.h"

using namespace std;

void Menu() {
    while (true) {
        int option;
        cout << "" << endl;
        cout << "NEIVCE Course and Student Enrolment System" << endl;
        cout << "1.Course Entry" << endl;
        cout << "2.Student Registration Entry" << endl;
        cout << "3.Delete Course Record" << endl;
        cout << "4.Delete Student Record" << endl;
        cout << "5.Course Enrolment Report" << endl;
        cout << "0.Exit" << endl;
        cout << "" << endl;

        cout << "Enter Option(0-5):" << endl;
        cin >> option;

        switch (option) {
        case 1:
            CourseCode();
            break;
        case 2:
            StudentRegistrationEntry();
            break;
        case 3:
            DeleteCourseRecord();
            break;
        case 4:
            DeleteStudentRecord();
            break;
        case 5:
            CourseEnrolmentReport();
            break;
        case 0:
            cout << "System Exit, Thanks Your" << endl;
            return;
        default:
            cout << "Invalid Code, Please Try Again" <<endl;
            break ;
    }
    }
    
}

