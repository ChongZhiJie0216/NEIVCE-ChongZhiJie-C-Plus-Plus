#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    cout << "Hello World!\n";
    cout << "String Concatenation:" << endl;
    string code = "seair011";
    string name = "object-orienred programming using c++";
    string fullname = "";

    fullname = fullname.append(code);
    fullname = fullname.append(" ");
    fullname = fullname.append(name);

    //check2

    char coursecode[20] = "SEAIR011";
    char coursename[100] = "Object-oriented programming using c++";
    char coursefullname[120] = "";
    strcat(coursefullname, coursecode);
    strcat(coursefullname, "");
    strcat(coursefullname, coursename);
    cout << "courseFull Name = " << coursefullname << endl << endl;

    //length
    cout << "The length of the code is " << code.length() << endl;
    cout << "the length of the coursecode is " << strlen(coursecode) << endl << endl;

    //comparison
    cout << "String comparison" << endl;
    string strCode1 = "SEAIR";
    string strCode2 = "SEAIR";
    if (strCode1 == strCode2)
        cout << "strcode 1 is equal to strcode 2" << endl;
    else
        cout << "strcode 1 is not equal to strcode 2" << endl << endl;

    char str1[] = "yes";
    char str2[] = "Yes";
    int iCompare = strcmp(str1, str2);
    if (iCompare == 0)
        cout << "str1[] is equal to str2" << endl;
    else
        cout << "str1[] is not equal to str2[]" << endl;

    cout << "iCompare = " << iCompare << endl << endl;

    //copy whole setting
    cout << "String Copy" << endl;
    char ch1[] = "123";
    char ch2[] = "456";
    cout << "before copy, ch1 = " << ch1 << endl;
    strcpy(ch1, ch2);
    cout << "after copy, ch1 =" << ch1 << endl;
    cout << "after copy, ch2 =" << ch2 << endl;

    //capture subpart of string
    string strnumber = "0123456789";
    string strSubnumber = strnumber.substr(1, 6);
    cout << "after substr , strsubnumber = " << strSubnumber << endl << endl;

    //replace
    cout << "String replacement" << endl;
    string s1 = "i am living in kl";
    string s2 = "kuala lumpur";
    cout << "before replacement, s1=" << s1 << endl;
    s1.replace(14, 2, s2);
    cout << "after replacement, s1= " << s1 << endl << endl;

    //find strnig kuala lumpur
    cout << "s1" << s1 << endl;
    string strfind = "kuala lumpur";
    size_t indexPosition = s1.find(strfind);
    cout << "indexPosition" << indexPosition << endl;
    if (indexPosition != string::npos)
        cout << "Found" << strfind << "at index(position)" << indexPosition << endl;
    else
        cout << strfind << "is not found" << endl;

    return 0;
}