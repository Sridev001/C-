//Multiple Inheritance

#include <iostream>
using namespace std;

//class M
class M
{
    protected:                 //protected variable int m
    int m;
    public:
    void get_m(int);           //public get m
};

//class N
class N
{
    protected:                 //protected variable int n
    int n;
    public:
    void get_n(int);           //public get n
};

// class p
class P : public M, public N
{
    public:
    void display(void);          //declare display function
};

void M :: get_m(int x)
{
    m = x;                  //assign x value to m
}

void N :: get_n(int y)
{
    n = y;                //assign y value to n
}


void P :: display(void)          //display output function
{
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;       
    cout << "m*n = " << m*n << endl;
}

int main()
{
    P p;
    p.get_m(10);        //paramter constructor
    p.get_n(20);          // give m and n value
    p.display();           //call display function

    return 0;
}