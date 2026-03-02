#include <iostream>

using namespace std;

int main()
{

    int temp;
    cout << "enter tea temperature in Celcius. " << endl;
    cin >> temp;

    if (temp > 100)
    {
        cout << "too hot!" << endl;
    }
    else
    {
        if (temp >= 80 && temp <= 100)
        {
            cout << "perfect temperatue." << endl;
        }
        else if (temp < 80)
        {
            cout << "too cold!." << endl;
        }
    }
    return 0;
}