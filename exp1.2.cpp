//exp 1 
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:


    void display(string name)
    {
        cout << "Student Name: " << name << endl;
    }

    
    void display(string name, int roll_number)
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
    }

    
    void display(int grade)
    {
        cout << "Grade: " << grade << endl;

        if (grade >= 90 && grade <= 100)
        {
            cout << "Division: First Division" << endl;
        }
        else if (grade >= 70)
        {
            cout << "Division: Second Division" << endl;
        }
        else if (grade >= 50)
        {
            cout << "Division: Third Division" << endl;
        }
        else
        {
            cout << "Division: Fail" << endl;
        }
    }
};

int main()
{
    Student s;

    s.display("Shivam");


    s.display("Siddh", 12);
    

    s.display(90 );

    return 0;
}
