#include <iostream>
#include <string>
using namespace std;
int main()
{
    string username;
    int age;

    // ask username
    cout << "Enter you username:: \n";
    getline(cin, username);

    // ask user age
    cout << "Enter you age:: \n";
    cin >> age;
    // this line prints the user details
    cout << "Username is " << username << "\t" << "Age is " << age << endl;

    return 0;
}