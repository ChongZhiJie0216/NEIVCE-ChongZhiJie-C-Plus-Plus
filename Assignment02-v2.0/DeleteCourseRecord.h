#pragma once
#include "Entry.h"

#include <vector>

#include "Course.h"

using namespace std;

class DeleteCourseRecord : public Entry
{
public:
    DeleteCourseRecord(vector<Course>* courses);
    void showUI();

private:
    vector<Course>* courses;
};
