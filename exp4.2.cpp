// write a c++ program to store the monthly salaries of 10 employees in a vector, use range based for loop with 
// auto to display the following information:
// 1. Salaries of each employee
// 2. total salary of all employees
// 3. highest salary among all employees
// 4. count how many employees have salary more than 50000
// 5. average salary of all employees
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<double> salaries = {45000.00, 52000.00, 60000.00, 48000.00, 75000.00 , 90000.00 , 80000.00 , 70000.00 , 65000.00 , 55000.00};
    int t = 0;  
    double h = salaries[0];
    int c = 0;
    cout << "Salaries of employees";
    for (auto salary : salaries){
        cout << salary << " ";
        t += salary;
        if (salary > h) {
            h = salary;
        }
        if (salary > 50000) {
            c++;
        }
    }
    cout << endl;
    double avg = t / salaries.size();
    cout << "Total salary of all employees " << t << endl;
    cout << "Highest salary among all employees " << h << endl;
    cout << "Number of employees with salary above 50000" << c << endl;
    cout << "Average salary of all employees  " << avg << endl;
    return 0;
}