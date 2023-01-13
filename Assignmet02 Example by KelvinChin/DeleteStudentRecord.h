#pragma once
#include "Entry.h"

#include <vector>

#include "Course.h"

class DeleteStudentRecord : public Entry
{
public:
    DeleteStudentRecord(std::vector<Course> *courses);
    void showUI();

private:
    std::vector<Course> *courses;
};
