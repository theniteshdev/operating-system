#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << "Day " << i << " of Brewing tea" << endl;

        for (int j = 1; j <= 3; j++)
        {
            cout << "Brewing tea" << j << endl;
        }
    }
    return 0; // assignment 5 completed
}