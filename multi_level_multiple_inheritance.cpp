// hybrid Inheritance (both multi level multiple inheritance)

#include <iostream>
using namespace std;

//class student
class student
{
    protected:
    int roll_number;
    public:
    void get_number(int a)          //parameter constructor
    {                               // to get roll number
        roll_number = a;            //assign to protected variable
    }

    void put_number(void)
    {
        cout << "Roll No: " << roll_number << "\n";          //print the roll number
    }
};

//class student is the inheritance to class test
class test : public student
{
    protected:                     //protected variable of part1 part2
    float part1, part2;                      
    public:
    void get_marks(float x, float y)      //assing by parameter constructor
    {
        part1=x;                          // assign x and y to part1 and part2
        part2=y;
    }
    void put_marks(void)                //In void put marks
    {
        cout << "Marks obtained : " << "\n"  
             << "Part1 = " << part1 << "\n"     //print the protected variable
             << "Part2 = " << part2 << "\n";
    }
};


//new class named sports
class sports
{
    protected:
    float score;
    public:
    void get_score(float s)          //get s value from main function as parameter constructor
    {
        score = s;          //assign the s to protected variable score
    }
    void put_score(void)
    {
        cout << "Score wt : " << score << "\n\n";    //print the protected score value
    }
};

//class test and sports is the inheritance to class result
class result : public test, public sports
{
    float total;       //declare total variable
    public:
    void display(void);    //display fn
};

void result :: display(void)
{
    total = part1 + part2 + score;       //calculate total
    put_number();                        // inherited   result <- test <- students
    put_marks();                         // inherited   result <- test
    put_score();                         //inherited result <-

    cout << "Total Score : " << total << "\n";
}

//main function
int main()
{
    result student_1;                 //assign result to object student_1
    student_1.get_number(1234);       //assign every parametarized constructor
    student_1.get_marks(27.5,33.0);
    student_1.get_score(6.0);
    student_1.display();
    return 0;
}