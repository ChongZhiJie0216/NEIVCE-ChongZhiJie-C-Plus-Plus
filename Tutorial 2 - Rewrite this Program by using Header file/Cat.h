#include <iostream>
using namespace std;

class Cat
{
public:
    string myName = "";
    string sound = "Meow";

    Cat()
    {
        myName = "no name";
    }

    Cat(string name)
    {
        myName = name;
    }

    void shout()
    {
        string strSound;
        for (int i = 1; i <= numberOfSound; i++) {
            strSound = strSound + sound + ", ";
        }
        cout << strSound + "my name is " + myName << endl << "\n\n\n";
    }

    void setNumberOfSound(int number) {   //Setter
        if (number > 20) {
            numberOfSound = 20;
        }
        else {
            numberOfSound = number;
        }
    }

    int getNumberOfSound() {    //Getter
        return numberOfSound;
    }

private:
    int numberOfSound = 0;
};
