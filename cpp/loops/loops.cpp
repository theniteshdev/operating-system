#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Loops section." << endl;

    int n = 5;
    while (n > 0)
    {
        cout << n << endl;
        n--;
    }

    int i = 3;
    do
    {
        cout << i << endl;
        i--;
    } while (i != 0);

    cout << "Value of n " << n << endl;
    cout << "Value of i " << i << endl;

    for (int j = 10; j >= 0; j--)
    {
        cout << j << endl;
    };

    cout << "end of the programme." << endl;

    return 0;
}