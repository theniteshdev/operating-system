#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool isPremium = false;
    char choice;
    int age;
    // getting age
    cout << "userage: " << endl;
    cin >> age;
    bool hasReferalCode = false;
    // ask for referal code
    cout << "referal code: (y, n)" << endl;
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
        hasReferalCode = true;
    }
    // ask for account is banned or not ?
    bool isAccountBan = false;
    cout << "Accout is banned or not? : (y, n)" << endl;
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
        isAccountBan = true;
    }

    // decision for access
    if (hasReferalCode && !isAccountBan && age >= 18)
    {
        isPremium = true;
        cout << "access GRANTED." << endl;
        return 1;
    }
    cout << "access DENIED!" << endl;
    return 0;
}