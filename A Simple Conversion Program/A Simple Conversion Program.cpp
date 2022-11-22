// A Simple Conversion Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

//int main()
//{
//    string user_input;
//    user_input = "Y";
//
//    while (user_input._Equal("Y")||user_input._Equal("y"))
//    {
//        cout << "Please Enter Input " << endl;
//        int input_num;
//        cin >> input_num;
//        int m = input_num / 100;
//        double cm = input_num - (m * 100);
//
//        cout << "\n";
//        cout << input_num;
//        cout << " CM ";
//        cout << " to ";
//        cout << m;
//        cout << " M ";
//        cout << cm;
//        cout << "CM";
//        cout << "\n";
//        cout << "Do you want to continue? Y/N \n";
//        cin >> user_input;
//    }
//    
//};
class Cal
{
public:
    string user_input = "";

    Cal() {
        user_input = "Y";
    }
    Cal(string input) {
        user_input = input;
    };
    void cal()
    {
        cout << "Please Enter Input " << endl;
        int input_num;
        cin >> input_num;
        int m = input_num / 100;
        double cm = input_num - (m * 100);

        cout << "\n";
        cout << input_num;
        cout << " CM ";
        cout << " to ";
        cout << m;
        cout << " M ";
        cout << cm;
        cout << "CM";
        cout << "\n";
        cout << "Do you want to continue? Y/N \n";
        cin >> user_input;

    }
};
int main()
{
    Cal myCal;
    while (myCal.user_input._Equal("Y") || myCal.user_input._Equal("y")) {
        myCal.cal();
    }
}