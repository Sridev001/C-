// Implementation of Destructors

#include <iostream>
using namespace std;

int count =0;     //unversal variable

class alpha
{
    public:
    alpha()        //constructor increments the global variable count
    {
        count++;
        cout << "\n No of object created " << count;          //printing object created
    }

    ~alpha()     //destructor decrements the global variable count
    {
        cout << "\n No of object Destroyed " << count;           //destructor 
        count--;
    }
};

int main()
{
    cout << "\n Enter Blocks ";
    alpha A1,A2,A3,A4;                     // four instances are created for alpha class
    {
        cout << "\n\n Enter block1\n ";
        alpha A5;
    }
    {
        cout << "\n\n Enter block2\n ";
        alpha A6;
    }

    cout << "\n\nRe Enter main\n";  //print “Re Enter main” and return from main()
    return 0;

}