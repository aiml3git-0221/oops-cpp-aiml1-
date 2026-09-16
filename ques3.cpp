//Hospital Active Patient Counter
#include<iostream>
using namespace std;

class Patient{
    int patientId;
    string patientName;
    static int activePatients;
public:
    Patient(int id,string name){
        patientId=id;
        patientName=name;
        activePatients++;
    }
    ~Patient(){
        activePatients--;
    }
    static void showActivePatients(){
        cout<<"Active Patients: "<<activePatients<<endl;
    }
};

int Patient::activePatients=0;

int main(){
    Patient::showActivePatients();
    {
        Patient p1(1,"A");
        Patient p2(2,"B");
        Patient::showActivePatients();
    }
    Patient::showActivePatients();
    return 0;
}