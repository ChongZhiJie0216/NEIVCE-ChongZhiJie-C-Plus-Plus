#include "Parent.h"
#include <iostream>

using namespace std;

void Parent::parent_public()
{
    cout << "This is public function. (Parent) " << endl;
}

void Parent::parent_protected()
{
    cout << "This is protected function. (Parent) " << endl;
}

void Parent::parent_private()
{
    cout << "This is private function. (Parent) " << endl;
}
