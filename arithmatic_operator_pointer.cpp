//Arithmatic operator on pointer
#include <iostream>
#include<conio.h>
using namespace std;

void main()
{
    int num[] = {56,76,22,18,90};
    int *ptr;
    int i;
    clrscr();
    cout << "The array values are:\n";
    for(i=0;i<5;i++)
    {
        cout<< num[i]<<"\n";
    }
    //Initializing the base address of str to ptr 
    ptr = num;
    //Printing the value in the array
    cout << "\nValue of ptr" << ptr;
    cout<<"\n";
    ptr++;
    cout<<"\nValue of ptr++  : " << *ptr;
    cout << "\n";
    ptr--;
    cout<<"\nValue of ptr ptr--  : " << *ptr;
    ptr = ptr+2;
    cout<<"\nValue of ptr+2 : " << *ptr;
    cout << "\n";
    ptr = ptr-1;
    cout<<"\nValue of ptr-1  : " << *ptr;
    cout << "\n";
    ptr+=3;
    cout<<"\nValue of ptr+=3  : " << *ptr;
    cout << "\n";                                                       
    ptr-=2;
    cout<<"\nValue of ptr-=2  : " << *ptr;
    cout << "\n";
    getch();

}
