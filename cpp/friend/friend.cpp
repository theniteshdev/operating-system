#include <iostream>
using namespace std;

 class Laptop{
    private:
    int pvt;

    protected:
    int protect;

    public:
    int pub;

    Laptop(int pt, int pb, int pr){
        pvt = pt;
        pub = pb;
        protect = pr;
        cout << "Constructor runed." << endl;
    }; 
};

int main(){
    // friend keyword in cpp
    Laptop acer(1,2,3);
    cout << acer.pub << endl;

    return 0;
}