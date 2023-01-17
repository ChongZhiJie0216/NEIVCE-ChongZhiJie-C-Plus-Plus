#pragma once
#include "Entry.h"

#include <vector>

#include "Course.h"

using namespace std;

class StudentRegistrationEntry : public Entry
{
public:
    StudentRegistrationEntry(vector<Course>* courses);
    void showUI();

private:
    vector<Course>* courses;
};
