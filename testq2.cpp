// Q2. Scope Resolution Operator and Data Hiding
// Create a class Employee with private data members employee ID, name and salary. Declare input() and display() member functions inside the class, but define both functions outside the class using the scope resolution operator (::). Create an object and display the employee details.
// Concepts: Data hiding, private members, member functions, scope resolution operator (::).
#include <iostream>
using namespace std;
class Employee{
    private:
    int empID;
    int salary;
    string name;
    public:
    void accept(int id, int sal, string n){
        empID=id;
        salary=sal;
        name=n;
    }
    void display(){
        Employee::accept(1,500,"John");
        cout<<"Employee ID:"<<empID<<endl;
        cout<<"Salary:"<<salary<<endl;
        cout<<"Name:"<<name<<endl;
    }
};
int main(){
    Employee e;
    e.display();
    return 0;
}