#pragma once
#pragma once
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

class Course
{
public:
    string courseCode;
    string courseName;
    vector<Student> students;
};