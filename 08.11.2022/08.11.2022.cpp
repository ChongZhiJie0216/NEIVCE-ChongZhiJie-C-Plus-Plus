#include <iostream>
using namespace std;

/*int main()
{
	cout << "*\n";
	cout << "**\n";
	cout << "***\n";
	cout << "****\n";
	cout << "*****\n";
	cout << "*******\n";
	cout << "********\n";
	cout << "*********\n";
	cout << "**********\n";
	cout << "***********\n";
}*/
int main()
{
	string a = "*";
	for (int i = 0; i < 20; i++) {
		cout << a << endl;
		a += "*";
	}
}