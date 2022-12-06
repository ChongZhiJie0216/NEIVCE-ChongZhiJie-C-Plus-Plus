#include "Man.h"
#include "IronMan.h"
#include "SuperMan.h"
#include <iostream>
using namespace std;

int main()
{
    Man* objMan;
    SuperMan objSuperman;
    IronMan objIronMan;

    Man m;
    m.introduce();
    m.walk();

    objMan = &objSuperman;
    objMan->introduce();
    objMan->walk();

    objMan = &objIronMan;
    objMan->introduce();
    objMan->walk();

    return 0;
}