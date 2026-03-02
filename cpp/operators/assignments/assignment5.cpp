#include <iostream>
#include <string>
using namespace std;

main()
{

    double unitsConsumed;
    bool isSeniorCitizen;
    double finalBill;
    if (unitsConsumed <= 100)
    {
        finalBill = 5 * unitsConsumed;
        cout << "Bill: " << finalBill << endl;
    }
    else if (unitsConsumed > 100)
    {
        finalBill = 8 * unitsConsumed;
        cout << "Bill: " << finalBill << endl;
    }

    if (isSeniorCitizen)
    {
        finalBill -= (finalBill * 10 / 100);
        cout << "Bill: " << finalBill << endl;
    }

    return 0;
}