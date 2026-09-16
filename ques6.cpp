//Student Result Analysis using Friend Class
#include<iostream>
using namespace std;

class ResultAnalyzer;

class StudentResult{
    int rollNo;
    string name;
    int m1,m2,m3;
    static int totalStudents;
public:
    StudentResult(int r,string n,int a,int b,int c){
        rollNo=r;
        name=n;
        m1=a;
        m2=b;
        m3=c;
        totalStudents++;
    }

    ~StudentResult(){
        cout<<"Object Destroyed"<<endl;
    }

    static void showStudents(){
        cout<<"Total Students: "<<totalStudents<<endl;
    }

    friend class ResultAnalyzer;
};

int StudentResult::totalStudents=0;

class ResultAnalyzer{
public:
    void analyze(StudentResult &s){
        int total=s.m1+s.m2+s.m3;
        double per=total/3.0;

        cout<<"Name: "<<s.name<<endl;
        cout<<"Total: "<<total<<endl;
        cout<<"Percentage: "<<per<<endl;

        if(s.m1>=40&&s.m2>=40&&s.m3>=40)
            cout<<"Pass"<<endl;
        else
            cout<<"Fail"<<endl;
    }
};

int main(){
    StudentResult s1(1,"Saanvi",80,75,90);

    ResultAnalyzer r;
    r.analyze(s1);

    StudentResult::showStudents();

    return 0;
}
