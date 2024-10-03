// printing the full name of the persen by getting first, middle and last name from user

#include <iostream>
using namespace std;
int main()
{
    string first;
    string initial;
    string last;
    string space=" ";
    string dot=".";
    cout << "Enter your first name: ";
    cin >> first;
    cout << "Enter your middle name: ";
    cin >> initial;
    cout << "Enter your last name: ";
    cin >> last;

    cout << first+space+initial+dot+space+last;
    return 0;
}