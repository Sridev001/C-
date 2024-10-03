// // COnstructors program with c++

#include <iostream>
#include <cstring> // Include this header for strlen and strcpy
using namespace std;

// create String (function) for constructor operation
class String
{
    char *name;
    int length;
    public:
    String()              //default constructor
    {
        length = 0;
        name = new char[length + 1];
        name[0] = '\0'; // Initialize with an empty string
    }

    String(const char *s)         //parameter constructor
    {
        length = strlen(s); 
        name = new char[length + 1];
        strcpy(name, s);
    }

    void display(void)    //display string
    {
        cout << name << "\n";
    }

    void join(String &a, String &b);     //join function used for string a,b
    
};

void String::join(String &a, String &b)
{
    length = a.length + b.length;          // adding length of string a,b
    delete[] name;
    name = new char[length + 1];             //dynamic allocation

    strcpy(name, a.name);
    strcat(name, b.name);
}

int main()
{
    const char *first = "Joseph";
    String name1(first), name2("Louis "), name3("Largrange"), s1, s2;

    s1.join(name1, name2);             //join name1 and name2 saved in s1
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();                  //display name1, name2, name3
    s1.display();                     //display s1 and s2 
    s2.display();

    return 0;
}


