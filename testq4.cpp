// Q4. Function Overloading and Default Argument
// Create overloaded functions named area() to calculate the area of a square and a rectangle. Also create a function simpleInterest() in which the rate of interest is a default argument. Call all functions from main() and display the results.
// Concepts: Function overloading, default arguments, functions.
#include <iostream>
using namespace std;
class calc{
    public:
    int area(int s){
        return s*s;
    }
    int area(int l, int b){
        return l*b;
    }
    int simpleInterest(int p, int t, float r = 5.0){
        return (p*t*r)/100;
    }
};
int main(){
    calc a1;
    calc a2;
    calc s1;
    cout<<a1.area(2)<<endl;
    cout<<a2.area(3,7)<<endl;
    cout<<s1.simpleInterest(1000, 2)<<endl;
}
