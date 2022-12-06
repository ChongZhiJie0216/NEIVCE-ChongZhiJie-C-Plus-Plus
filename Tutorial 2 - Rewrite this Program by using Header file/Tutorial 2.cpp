using namespace std;
#include "Cat.h"
int main()
{
    Cat c;
    c.setNumberOfSound(3);
    c.shout();

    Cat c2("Kitty");
    c2.setNumberOfSound(100);
    c2.shout();

    return 0;
}