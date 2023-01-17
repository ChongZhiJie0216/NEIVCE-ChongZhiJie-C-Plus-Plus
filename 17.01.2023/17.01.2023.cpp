#include <iostream>
#include "Parent.h"
#include "Child.h"

using namespace std;

int main()
{
    Parent p;
    //p.parent_private();
    //p.parent_protected();
    p.parent_public();

    Child c;
    //c.child_private();
    //c.child_protected();
    c.child_public();
    return 0;
}
