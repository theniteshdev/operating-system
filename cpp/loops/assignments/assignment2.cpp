#include <iostream>
using namespace std;

int main()
{
    string add_suger;
    do
    {
        cout << "Wants add more sugar? ";
        cin >> add_suger;
    } while (add_suger != "enough");
    cout << "Ok, lets drink tea." << endl;
    return 0; // completed assignment 2
}