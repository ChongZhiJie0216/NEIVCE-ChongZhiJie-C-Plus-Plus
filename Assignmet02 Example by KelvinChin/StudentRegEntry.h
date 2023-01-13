#pragma once
#include "Entry.h"

#include <vector>

#include "Course.h"

class StudentRegEntry : public Entry
{
public:
    StudentRegEntry(std::vector<Course> *courses);
    void showUI();

private:
    std::vector<Course> *courses;
};
