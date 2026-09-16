//University and Department using Nested Class
#include<iostream>
using namespace std;

class University{
    string universityName;
public:
    University(string n){
        universityName=n;
    }

    class Department{
        string departmentName;
        int studentCount;
    public:
        Department(string d,int s){
            departmentName=d;
            studentCount=s;
        }
        void display(University &u){
            cout<<"University: "<<u.universityName<<endl;
            cout<<"Department: "<<departmentName<<endl;
            cout<<"Students: "<<studentCount<<endl;
        }
    };
};

int main(){
    University u("ABES Engineering College");
    University::Department d("CSE",120);
    d.display(u);
    return 0;
}