#include <iostream>
using namespace std;

int main()
{
    int tea_bags;

    while (true)
    {
        cout << "how many tea bags you have ? ";
        cin >> tea_bags;
        if (tea_bags == 0)
        {
            cout << "out of tea bags" << endl;
            break;
        }
    }

    return 0; // assignment1 completed
}