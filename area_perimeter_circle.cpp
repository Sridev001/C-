// Calculate the area and perimeter of the circle

#include <iostream>
using namespace std;
int main()
{
    const double PI = 3.14159;
    double radius;
    double perimeter;
    double area;
    cout << "Enter the radius value : ";
    cin >> radius;
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
    cout << "The radius of circle is " << radius << endl;
    cout << "The perimeter of circle is " << perimeter << endl;
    cout << "The area of circle is " << area << endl;
    return 0;

}