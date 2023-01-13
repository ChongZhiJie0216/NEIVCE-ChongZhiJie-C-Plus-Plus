#pragma once
#include <string>
#include <vector>

#include "Student.h"

class Course
{
public:
    std::string courseCode;
    std::string courseName;
    std::vector<Student> students;
};
