//Employee Record using Constant Object
#include<iostream>
using namespace std;

class Employee{
    int employeeId;
    string name;
    double salary;
public:
    Employee(){
        employeeId=0;
        name="NA";
        salary=0;
    }

    Employee(int id,string n,double s){
        employeeId=id;
        name=n;
        salary=s;
    }

    Employee(const Employee &e){
        employeeId=e.employeeId;
        name=e.name;
        salary=e.salary;
    }

    void updateSalary(double s){
        salary=s;
    }

    void display() const{
        cout<<"ID: "<<employeeId<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    const Employee e1(101,"Saanvi",50000);
    e1.display();

    Employee e2=e1;
    e2.display();

    //e1.updateSalary(60000);

    return 0;
}