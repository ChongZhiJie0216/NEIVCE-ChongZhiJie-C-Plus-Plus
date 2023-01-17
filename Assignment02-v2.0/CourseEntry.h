#pragma once
#include "Entry.h"

#include <vector>

#include "Course.h"

using namespace std;

class CourseEntry : public Entry
{
public:
    CourseEntry(vector<Course>* course);
    void showUI();

private:
    vector<Course>* courses;
};
