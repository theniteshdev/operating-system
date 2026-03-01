#include <iostream>
// here no need for using namespace std, just use the needed one
using std ::cout;
using std ::endl;

int main()
{
    cout << "hello, world" << endl;
    return 9;
    // returning 0 means everything is fine
    // :: -> this is an operator
    // << -> passing value (cout <<"hey" -> it means pass "hey" to cout)
    // endl -> ending of the line
    // semicloum is must for end of the line
    // returned type is very important becasuse c++ is statically typed lang
}
