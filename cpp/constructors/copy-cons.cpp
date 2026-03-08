#include <iostream>
using namespace std;

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


int main(){
    // copy the object
    Chai mainLemonChai("lemon chai", 343);

    Chai copiedLemonChai = mainLemonChai;
    // mainLemonChai.chaiInLtr = 122; // changing main lemon amoutn
    // mainLemonChai.chaiName = "Masala Chai"; // changing main lemon chai name
    

    return 0;
}
