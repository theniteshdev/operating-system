#include <iostream>
#include <string>
using namespace std;
int main()
{
    // conditionals
    int nums;
    string apple;

    cout << (true == false) << endl;
    cout << false << endl;
    cout << (true == 1) << endl;
    cout << "Enter you nums" << endl; // if we enters string it stores value 0
    cin >> nums;
    cout << nums << endl;

    if (true)
    {
        cout << "True condition runed." << endl;
    }
    else
    {
        cout << "False condition executed" << endl;
    }

    const bool isAdmin = false;
    if (isAdmin)
    {
        cout << "Access Granted" << endl;
    }
    else if (!isAdmin)
    {
        cout << "Access Denined" << endl;
    }
    const int discountPer = 67;
    if (discountPer <= 20)
    {
        cout << "Basic discount is going on." << endl;
    }
    else if (discountPer <= 50)
    {
        cout << "Discount is almost 50%." << endl;
    }
    else if (discountPer >= 60)
    {
        cout << "Very big deal is going on." << endl;
    }
    else
    {
        cout << "Fast discount is going on." << endl;
    }

    // switches
    const int userAge = 81;
    switch (userAge)
    {
    case 18:
        cout << "Now, real life starts." << endl;
        break;

    case 25:
        cout << "you're professional worker." << endl;
        break;

    case 32:
        cout << "you're a exprerined person." << endl;
        break;

    case 45:
        cout << "Now, you have to enjoy your life." << endl;
        break;

    default:
        cout << "Sorry, we are not write any message for you.";
    }

    return 0;
}