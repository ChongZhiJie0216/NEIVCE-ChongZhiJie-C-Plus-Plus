#pragma once
#include "Entry.h"

#include <vector>
#include "Course.h"

using namespace std;

class EnrollmentReportEntry : public Entry
{
public:
    EnrollmentReportEntry(vector<Course>* courses);
    void showUI();

private:
    vector<Course>* courses;
};
