#include <iostream>
using namespace std;

int main()
{
    // creating tea lists
    string tea_lists[5] = {"Herbal Tea", "Orange Tea", "Pome Tea", "No Tea", "Lemon Tea"};

    for (int i = 0; i < 5; i++)
    {
        if (tea_lists[i] == "Herbal Tea")
        {
            cout << "I not like this tea, So I skip this...." << endl;
            continue;
        }
        if (tea_lists[i] == "No Tea")
        {
            cout << "Exit printing teas." << endl;
            break;
        }
        cout << tea_lists[i] << endl;
    }

    return 0;
}