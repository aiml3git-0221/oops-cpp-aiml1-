// write a c++ program to store attendance of six students in a vector , use range based for loop with auto to display all the attendance 
//percentages and count how many students how many students have attendence more than 75% 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<double> attendance = {85.50, 67.05, 90.00, 42.50, 60.00, 95.00};
    int c = 0;
    cout << "Attendance percentages of students: ";
    for (auto percent : attendance) {
        cout << percent << "% ";
        if (percent > 75) {
            c++;
        }
    }
    cout << endl;
    cout << "Number of students with attendance above 75%: " << c << endl;
    return 0;
}
