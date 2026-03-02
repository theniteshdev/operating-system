#include <iostream>
using namespace std;

int main()
{
    for (int i = 2; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << "We can make tea batch of " << i << " teas." << endl;
        }
    };
    return 0; // completed assignment3
}