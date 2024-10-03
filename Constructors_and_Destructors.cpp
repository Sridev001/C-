//A Program to use a class in object oriented programming with Constructors and Destructors

#include <iostream>
using namespace std;

//class Definition with data members and member function
class Circle
{
    private:
    double radius;
    public:
    Circle(double radius);         //parameter constructor
    Circle();                      //Default constructors
    Circle(const Circle& circle);  //Copy constructors
    ~Circle ();                    //Destructors
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double radius);

};

//Definition of parameter constructors
Circle :: Circle(double rds)
:radius(rds)
{
    cout << "The parameter constructor was called." << endl;
}

//Definition of default constructors
Circle :: Circle()
:radius(0.0)
{
    cout << "The default constructor was called." << endl;
}

//Definition of copy constructors
Circle :: Circle(const Circle& circle)
:radius(circle.radius)
{
    cout << "The copy constructor was called." << endl;
}

//Definition of Destructors
Circle :: ~Circle ()
{
    cout << "The destructor was called for circle with radius " << radius ;
    cout << endl;
}

//Definition of getRadius member function
double Circle :: getRadius() const
{
    return radius;
}

//Definition of getArea member function
double Circle :: getArea() const
{
    const double PI = 3.14;
    return (PI*radius*radius);
}

//Definition of getPerimeter member function
double Circle :: getPerimeter() const
{
    const double PI = 3.14;
    return(2 * PI * radius);
}

//Definition of setRadius member function
void Circle :: setRadius(double value)
{
    radius = value;

}

//main function
int main()
{
    //circle1 (parameter constructor)
    Circle circle1(5.2);
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area: " << circle1.getArea() << endl;
    cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

     //circle2 (copy consturctor)
    Circle circle2(circle1);
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area: " << circle2.getArea() << endl;
    cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;

     //circle3 (default constructor)
    Circle circle3;
    cout << "Radius: " << circle3.getRadius() << endl;
    cout << "Area: " << circle3.getArea() << endl;
    cout << "Perimeter: " << circle3.getPerimeter() << endl << endl;
    return 0;   
}