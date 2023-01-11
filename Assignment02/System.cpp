#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include "Menu.h"
#include "System.h"
using namespace std;

void CourseCode() {
    string course;
    cout << "Enter Course Code:" << endl;
    cin >> course;
    if (course == "SEAIR" || "seair") {
        cout << "" << endl;
        cout << "The Record has been Successfully Entered" << endl;
        cout << "________________________________________" << endl;
        cout << "Couser Code:SEAIR" << endl;
        cout << "Your Course Name:Software Engineering (Artificial Intelligent and Industrial Robotic)" << endl;
    }
    else if (course == "SECVR" || "secvr") {
        cout << "" << endl;
        cout << "The Record has been Successfully Entered" << endl;
        cout << "________________________________________" << endl;
        cout << "Couser Code:SECVR" << endl;
        cout << "Your Course Name:Software Engineering (Computer Games Development and VR)" << endl;

    }
    else if (course == "SEDSC" || "sedsc") {
        cout << "" << endl;
        cout << "The Record has been Successfully Entered" << endl;
        cout << "________________________________________" << endl;
        cout << "Couser Code:SEDSC" << endl;
        cout << "Your Course Name:Software Engineering (Data Science and Commercial Application Development)" << endl;

    }
    else if (course == "SEIOT" || "seiot") {
        cout << "" << endl;
        cout << "The Record has been Successfully Entered" << endl;
        cout << "________________________________________" << endl;
        cout << "Couser Code:SEIOT" << endl;
        cout << "Your Course Name:Software Engineering (Internet of Things)" << endl;

    }
    else if (course == "SECEF" || "secef") {
        cout << "" << endl;
        cout << "The Record has been Successfully Entered" << endl;
        cout << "________________________________________" << endl;
        cout << "Couser Code:SECEF" << endl;
        cout << "Your Course Name:Software Engineering (E-Commerce and Financial Technology)" << endl;

    }
    else if (course == "ITNET" || "itnet") {
        cout << "" << endl;
        cout << "The Record has been Successfully Entered" << endl;
        cout << "________________________________________" << endl;
        cout << "Couser Code:ITNET" << endl;
        cout << "Your Course Name:IT infrastructure (Computer Networking)" << endl;

    }
    else if (course == "ITCSI" || "itcsi") {
        cout << "" << endl;
        cout << "The Record has been Successfully Entered" << endl;
        cout << "________________________________________" << endl;
        cout << "Couser Code:ITCSI" << endl;
        cout << "Your Course Name:IT infrastructure (Cyber Security)" << endl;
    }
}

void StudentRegistrationEntry() {
    string course;
    string stdname;
    int stdnum;
    cout << "Enter Course Code:" << endl;
    cin >> course;
    cout << "Enter Student Name:" << endl;
    cin >> stdname;
    cout << "Enter Student Number:" << endl;
    cin >> stdnum;

    cout << "" << endl;
    cout << "The Record has been Successfully Entered" << endl;
    cout << "________________________________________" << endl;
    cout << "Couser Code:"<<course << endl;
    cout << "Student Name:" << stdname << endl;
    cout << "Student Number:" << stdnum << endl;
}

void DeleteCourseRecord() {
    string course;
    cout << "Enter Course Code:" << endl;
    cin >> course;
    
    cout << "" << endl;
    cout << "A Reminder,Total Number of"<<course<<"student"<< endl;
    cout << "Are you sure you want DELETED this "<<course<<"(y/N)?" << endl;
    cout << "" << endl;
    cout << course << "has been successfully DELETED" << endl;
    cout << "" << endl;


}

void DeleteStudentRecord() {
    int stdnum;
    cout << "Enter Student Code:" << endl;
    cin >> stdnum;

    cout << "" << endl;
    cout << "A Reminder,Student Name of" << stdnum << ":" << endl;
    cout << "Are you sure you want DELETED this Student Record (y/N) ? " << endl;
    cout << "" << endl;
    cout << stdnum <<"("<<")"<< "has been successfully DELETED" << endl;
    cout << "" << endl;
}

void CourseEnrolmentReport() {
    cout << "Course Enrolment Report" << endl;
    cout << "________________________________________" << endl;
}