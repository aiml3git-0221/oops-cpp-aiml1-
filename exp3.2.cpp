//default arguments(exp 3)
#include <iostream>
using namespace std;
void Data(string name="Shivam"){
    cout<<"Name: "<<name<<endl;
}
int main(){
    Data();
    Data("Siddh");
    return 0;
}
