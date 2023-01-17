#ifndef CHILD_H
#define CHILD_H
#include "parent.h"
#include <iostream>

using namespace std;

class Child : public Parent
{
public:
    void child_public();

protected:
    void child_protected();

private:
    void child_private();
};

#endif // CHILD_H
