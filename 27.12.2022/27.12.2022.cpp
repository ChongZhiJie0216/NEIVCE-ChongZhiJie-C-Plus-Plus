// vectortest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> num{ 6,4,5,1,2,3 };
    cout << "the values on vector:" << endl;
    for (const int& i : num)cout << i << " ";

    list <int> li = {};
    list<int>::iterator itr = li.begin();
    for (const int& i : num) li.insert(itr, i);
    cout << "\nThe Values in List:" << endl;
    for (itr = li.begin(); itr != li.end(); ++itr)cout << *itr << " ";

    cout << endl << endl;

    sort(num.begin(), num.end());
    for (const int& i : num) cout << i << " ";
    cout << endl;
    li.sort();
    for (itr = li.begin(); itr != li.end(); ++itr) cout << *itr << " "; cout << endl;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file