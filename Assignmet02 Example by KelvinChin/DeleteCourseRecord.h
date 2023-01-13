#pragma once
#include "Entry.h"

#include <vector>

#include "Course.h"

class DeleteCourseRecord : public Entry
{
public:
    DeleteCourseRecord(std::vector<Course> *courses);
    void showUI();

private:
    std::vector<Course> *courses;
};
