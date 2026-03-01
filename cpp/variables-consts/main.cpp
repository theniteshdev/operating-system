// in this section i have to learn- constants and variables

#include <iostream>  // iostream is a inclusive file contains the methods for input and output
using namespace std; // using standard name space for prevent conflits of var names

// main function is the starting of the code execuction
// int means -> integer
int main()
{
    cout << "Hey, Good Morning! \n";
    /*
    cout << "this is fine-1";
    cout << "this is fine-2";
    cout << "this is fine-3";
    */
    // cout << 'this is fine-4' << endl;
    // cout << `this is NOT fine - 5`;
    // cout << "This is test line \n";

    // major use of Data -> can can store or process or display

    int score;             // this is declare
    score = 10;            // this is initilization
    int balanceInUSD = 22; // this is declaration and initilization
    int level_ = 33;

    const int uid = 4532;
    // uid = 44; // this is not allowed [const value]

    level_ = level_ + 1;
    cout << level_ << endl;
    /*
        IDENTIFIERS -> int, return etc.
            reserved keyword -> not used as variables name
    */

    return 0; // 0 for showing everything is OK
}

/*
this is multi-line comments
*/