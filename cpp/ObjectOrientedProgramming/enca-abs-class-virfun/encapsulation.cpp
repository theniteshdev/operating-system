#include <iostream>
using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;
    public:
    BankAccount(string accountNumber, double initialBalance){
        accountNumber = accountNumber;
        balance = initialBalance;
    };

    double getBalance(){
        return balance;
    }

    void deposit(double amount){
        if(amount <= 0){
            cout << "Invalid deposit." << endl;
        }else{
            balance = amount;
            cout << "deposited balance " << amount << endl;
        }
    }

    void withdraw(double amount){
        if(!amount <= 0 && balance >= amount){
            balance -= amount;
            cout << "Withdraw amount " << amount << endl;
        }else{
            cout << "Invalid withdrawn amount." << endl;
        };
    }
};

int main(){
    // encapusulation -> shorthand capsula (getting more control)
    BankAccount person1("ba45nk33",1000);
    cout << person1.getBalance() << endl;

    return 0;
}