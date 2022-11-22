#include "Cat.h"
#include <iostream>

Cat::Cat()
{
	myName = "No Name";
}
Cat::Cat(string name)
{
	myName = name;
}
void Cat::shout()
{
	cout << "Hello my Name is " + myName << endl << "\n";
}