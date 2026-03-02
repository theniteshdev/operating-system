#include <iostream>
using namespace std;

int main()
{
    int offer_choosed;
    switch (offer_choosed)
    {
    case 1:
        cout << "you choosed for boiling tea." << endl;
        break;
    case 2:
        cout << "you choosed for steeping tea." << endl;
    case 3:
        cout << "you choosed for Iced tea." << endl;
    default:
        break;
    }

    return 0;
}