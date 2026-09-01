//call by value and call by reference (exp 2)
#include <iostream>
using namespace std;

class CallBy
{
public:
    void callByValue(int x)
    {
        x = 10;
        cout << "Value of x inside Call by Value function : " << x << endl;
    }
    void callByReference(int &x)
    {
        x = 10;
        cout << "Value of x inside Call by Reference function : " << x << endl;
    }
};

int main()
{
    CallBy obj;

    int x = 50;
    cout << "\nInitial Value of x : " << x << endl;

    cout << "\nCALL BY VAL" << endl;
    obj.callByValue(x);
    cout << "Value of x after Call by Value : " << x << endl;

    cout << "\nCALL BY REF" << endl;
    obj.callByReference(x);
    cout << "Value of x after Call by Reference : " << x << endl;

    return 0;
}