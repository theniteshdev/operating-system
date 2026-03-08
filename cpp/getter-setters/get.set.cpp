#include <iostream>
#include <string>
using namespace std;

class Compter{
    private:
        double price;
    public:
        string brand;
        Compter(){
            price = 2000;
            brand = "unknown brand";
        }

        Compter(double pri, string brand)
        {
            price = pri;
            brand = brand;
        }

        // getter
        double getPrice(){
            return price;
        };

        string getBrand(){
            return brand;
        }

        // setter
        void setBrand(string brand){
            brand = brand;
            cout << "brand name set." << endl;
        }

        void setPrice(double price){
            price = price;
            cout << "price set." << endl;
        };
};

int main(){
    // getters and setters

    Compter acer(1200, "acer");
    acer.setPrice(1300);
    return 0;
}