#include "Child.h"
#include <iostream>
#include <iostream>

using namespace std;

void Child::child_public()
{
    cout << "This is a public function. (Child)" << endl << endl;
}
void Child::child_protected()
{
    cout << "This is a protected.  (Child)" << endl << endl;
}

void Child::child_private()
{
    cout << "This is a public private. (Child)" << endl << endl;
}
