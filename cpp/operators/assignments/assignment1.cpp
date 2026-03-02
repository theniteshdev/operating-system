#include <iostream>
#include <string>
using namespace std;
int main()
{
    // storing price of items
    unsigned int coffee = 50, sandwich = 80, cake = 120;
    unsigned int coffee_quantity = 0, sandwich_quantity = 0, cake_quantity = 0;
    double totalPrice = 0, payable_amounts, service_charge, gst_charge;
    string common_question = "Have you bought";

    char choice;

    // ask for coffee
    cout << common_question << " coffee? (y, n)" << endl;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        cout << "Enter quantity of coffee? " << endl;
        cin >> coffee_quantity;
    }

    // ask for cakes
    cout << common_question << " cake? (y, n)" << endl;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        cout << "Enter quantity of cake? " << endl;
        cin >> cake_quantity;
    }

    // ask for sandwiches
    cout << common_question << " sandwich? (y, n)" << endl;
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        cout << "Enter quantity of sandwich? " << endl;
        cin >> sandwich_quantity;
    }

    // price calculation
    totalPrice = ((coffee * coffee_quantity) + (cake * cake_quantity) + (sandwich * sandwich_quantity));
    // service charge calculations
    service_charge = totalPrice * 0.05;
    gst_charge = (totalPrice + service_charge) * 0.18;

    payable_amounts = totalPrice + service_charge + gst_charge;

    if (payable_amounts > 500)
    {
        payable_amounts -= 50;
    }

    cout << "Final Bill: Rs." << payable_amounts << endl;
    return 0;
}