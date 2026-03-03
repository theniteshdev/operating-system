#include <iostream>
#include <string>
#include <vector>
using namespace std;

// user defined datatypes
class Form
{
    // data members (attributes)
public:
    string full_name;               // full-name
    string full_address;            // full-address
    int pincode;                    // pincode of canditate
    vector<string> account_members; // account-holders

    // member function
    void display_info()
    {
        cout << "Full Name: " << full_name << endl;
        cout << "Address: " << full_address << endl;
        cout << "Pincode: " << pincode << endl;
        // looping through account_members
        for (string ac_member : account_members)
        {
            cout << ac_member << endl;
        };
        cout << "info---end" << endl;
    };
};

int main()
{
    Form form1;
    form1.full_name = "Nitesh Kumar";
    form1.full_address = "Lakshman Nagar, Gumla";
    form1.pincode = 835207;
    form1.account_members = {"nitesh", "pritam", "karam", "dharam"};

    Form form2;
    form2.full_name = "Hitesh Chudhary";
    form2.full_address = "Jaipur Rajasthan";
    form2.pincode = 858585;
    form2.account_members = {"hitesh", "gitesh", "kitesh"};
    
    form2.display_info();
    form1.display_info();
    return 0;
}