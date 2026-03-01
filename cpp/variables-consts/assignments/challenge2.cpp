#include <iostream>
using namespace std;

int main()
{
    // Modify Tea Prices
    float tea_price;
    cout << "Please enter base price of the tea_" << endl;
    cin >> tea_price;
    // increasing 10% tax on base price of the tea
    tea_price = tea_price + ((tea_price * 10) / 100);
    cout << "price of tea with 10% tax is " << tea_price << endl;
    return 0;
}