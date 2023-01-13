#pragma once
#include "Entry.h"

#include <vector>
#include "Course.h"

class EnrollmentReportEntry : public Entry
{
public:
    EnrollmentReportEntry(std::vector<Course> *courses);
    void showUI();

private:
    std::vector<Course> *courses;
};
