#include <iostream>
#include <vector>
using namespace std;

class Laptop
{
public:
    string brand;
    string ram;
    string rom;
    vector<string> specialFeats;
    void laptopSummary()
    {
        cout << "Laptop Brand: " << brand << endl;
        cout << "Provided RAM: " << ram << endl;
        cout << "Provided ROM: " << rom << endl;
        cout << "First 2 Special Features are - " << endl;
        cout << "\t 1." << specialFeats[0] << endl;
        cout << "\t 2." << specialFeats[1] << endl;
    };

    Laptop()
    {
        specialFeats = {"backlit-keyboard", "large-touchpad"};
        ram = "4 GB";
        rom = "64 GB";
        brand = "unknown";
        cout << "Constructor called." << endl;
        laptopSummary();
    };
};
// param constructor
class Chai{
    public:
    string chaiName;
    double chaiInLtr;
    Chai(string cName, double amountOfChai){
        chaiName = cName;
        chaiInLtr = amountOfChai;
        cout << "Param constructor called." << endl;
    };
};

int main()
{
    // constructor
    Laptop myLaptop;

    // param constructor
    Chai lemonChai("lemon-chai", 22);
    cout << lemonChai.chaiName << endl;
    return 0;
}