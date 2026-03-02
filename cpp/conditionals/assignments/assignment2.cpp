#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age: " << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "they are too young to purchase." << endl;
    }

    cout << "allow them to proceed with purchasing tea" << endl;
    // assignment 2 done
    return 0;
}