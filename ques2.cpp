//Bank Account Audit using Friend Function
#include<iostream>
using namespace std;

class BankAccount{
    int accountNumber;
    string customerName;
    double balance;
public:
    BankAccount(int a,string n,double b){
        accountNumber=a;
        customerName=n;
        balance=b;
    }
    friend void compareBalance(const BankAccount&,const BankAccount&);
};

void compareBalance(const BankAccount &a,const BankAccount &b){
    if(a.balance>b.balance)
        cout<<a.customerName<<" has higher balance";
    else
        cout<<b.customerName<<" has higher balance";
}

int main(){
    BankAccount a1(101,"Shivam",50000);
    BankAccount a2(102,"Saanvi",70000);
    compareBalance(a1,a2);
    return 0;
}