#pragma once
#include "Entry.h"

#include <vector>

#include "Course.h"

using namespace std;

class DeleteStudentRecord : public Entry
{
public:
    DeleteStudentRecord(vector<Course>* courses);
    void showUI();

private:
    vector<Course>* courses;
};
