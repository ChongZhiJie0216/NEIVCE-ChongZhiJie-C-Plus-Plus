// 15.11.2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Cat
{
public:
	string myName = "";
	Cat()
	{
		myName = "No Name";
	}
	Cat(string name)
	{
		myName = name;
	}
	void shout()
	{
		cout << "Hello my Name is " + myName << endl << "\n";
	}
};

int main() {
	Cat myCat;
	myCat.myName = "WatchDog";
	myCat.shout();

	Cat myCat02;
	myCat02.myName = "WatchCat";
	myCat02.shout();

	return 0;
}