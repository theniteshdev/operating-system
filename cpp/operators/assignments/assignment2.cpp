#include <iostream>
using namespace std;
int main()
{
    // Wallet tracker

    // storing balance in INR
    double balance = 1000;
    double salary, expense, intrest_rate = 2;
    cout << "Current balance: INR. " << balance << endl;

    // add salary
    cout << "Salary amount: " << endl;
    cin >> salary;
    balance += salary;
    cout << "Current balance: INR. " << balance << endl;

    // subtract expenses
    cout << "Your total expenses: " << endl;
    cin >> expense;
    balance -= expense;
    cout << "Current balance: INR. " << balance << endl;

    // applying 2% montly intrest
    balance += (balance * intrest_rate) / 100;
    cout << "Current balance: INR. " << balance << endl;
    double weekly_budgets = balance / 4;
    cout << "Weekly Dubget for 4 weeks balance: INR. " << weekly_budgets << endl;
    cout << "Current balance: INR. " << balance << endl;
    return 0;
}