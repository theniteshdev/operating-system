#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Favorite Tea Input
    string favourite_tea;
    int cups_quantity;
    cout << "Enter your favourite tea " << endl;
    getline(cin, favourite_tea);

    cout << "Enter the quantity of tea " << endl;
    cin >> cups_quantity;

    cout << "You favourite tea is " << favourite_tea << " and you have ordered for " << cups_quantity << " cups." << endl;
    return 0;
}