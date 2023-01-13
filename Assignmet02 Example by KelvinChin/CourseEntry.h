#pragma once
#include "Entry.h"

#include <vector>

#include "Course.h"

class CourseEntry : public Entry
{
public:
    CourseEntry(std::vector<Course> *course);
    void showUI();

private:
    std::vector<Course> *courses;
};
