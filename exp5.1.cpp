// design a class to represent a bank account with proper data hiding and member functions for deposit , withdrawal 
// show balance
#include <iostream>
using namespace std;
class BankAccount{
    private:
        int balance;
    public:
        void setAmount(int newB){
            balance = newB;
        }
        void deposit(int amount){
            if (amount > 0) {
                balance += amount;
                cout << "Deposited  " << amount << endl;
            } else {
                cout << "Deposit amount must be positive" << endl;
            }
        }
        void withdrawal(int amount){
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawal  " << amount << endl;
            } else {
                cout << "Invalid withdrawal amount  " << endl;
            }
        }
        void showBalance(){
            cout << "Current Balance  " << balance << endl;
        }
};
int main(){
    cout << "==========================================" << endl;
    cout << "         BANK ACCOUNT PROGRAM" << endl;
    cout << "==========================================" << endl;
    BankAccount account;
    account.setAmount(1000000);  
    account.showBalance();
    account.deposit(50000);
    account.showBalance();
    account.withdrawal(30000);
    account.showBalance();
    account.withdrawal(15000); 
    return 0;
}