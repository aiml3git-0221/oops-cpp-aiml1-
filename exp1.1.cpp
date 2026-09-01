//exp 1
#include <iostream>
using namespace std;
class Student{
    public :
      string name;
       int roll_number;
       float grade;

       void input() 
       {
           cout << "Enter name: ";
           cin >> name;
           cout << "Enter roll number: ";
           cin >> roll_number;
           cout << "Enter grade: ";
           cin >> grade;
        }

       void display()
        {
           cout << "Name: " << name << endl;
           cout << "Roll Number: " << roll_number << endl;
       }

       void displaygrade() 
       {
           cout << "Grade: " << grade << endl;
            if (grade >= 90 && grade <= 100){
                cout << "First Division" << endl;
            } 
            else if (grade >= 70 && grade < 90){
                cout << "Second Division" << endl;
            }   
            else if (grade >= 50 && grade < 70){
                cout << "Third Division" << endl;
            } 
            else {
                cout << "Fail" << endl;
            } 
        }
};
int main(){
    Student s;
    s.input();
    s.display();
    s.displaygrade();
    return 0;
}