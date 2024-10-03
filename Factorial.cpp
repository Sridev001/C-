// Factorial of given number

#include <iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout << "Enter the n value : ";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    cout << "The Factorial of given number is " << fact;
    return 0;
}