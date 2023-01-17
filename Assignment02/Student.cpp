#include "Student.h"

#include <iostream>
#include <numeric>

Student::Student(vector<Course>* courses)
{
    this->courses = courses;
};