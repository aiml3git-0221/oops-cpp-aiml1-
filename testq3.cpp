// Q3. Parameter Passing
// Write a C++ program to demonstrate call by value and call by reference. Use two integer variables and write separate functions to swap their values. Display the values before and after each function call to show the difference.
// Concepts: Functions, reference variable, call by value, call by reference.
#include <iostream>
using namespace std;
class CallBy
{
public:
    void callByValue(int a){
        a = 100;
        cout << "Value of a inside Call by Value function : " << a << endl;
    }
    void callByReference(int &a){
        a = 100;
        cout << "Value of a inside Call by Reference function : " << a << endl;
    }
};
int main(){
    CallBy obj;
    int a = 50;
    cout << "\nInitial Value of a : " << a << endl;
    cout << "\nCALL BY VAL" << endl;
    obj.callByValue(a);
    cout << "Value of a after Call by Value : " << a << endl;
    cout << "\nCALL BY REF" << endl;
    obj.callByReference(a);
    cout << "Value of a after Call by Reference : " << a << endl;
    return 0;
}
