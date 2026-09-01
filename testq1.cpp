// Q1. Student Class and Object
// Create a class Student with data members roll number, name and marks. Create an object of the class, accept values from the user and display the complete student details using member functions.
// Concepts: Class, object, data members, member functions, accessing class members.
#include <iostream>
using namespace std;
class Student{
    public:
    int rollnum;
    int marks;
    string name;
    void input(int r,int m,string n){
        rollnum=r;
        marks=m;
        name=n;
    }
    void display(){
        cout<<"roll:"<<rollnum<<endl;
        cout<<"marks:"<<marks<<endl;
        cout<<"name:"<<name<<endl;
    }
};
int main(){
    Student s;
    s.input(20,90,"Hi");
    s.display();
    return 0;
}