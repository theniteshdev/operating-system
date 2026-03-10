#include <iostream>
#include <string>

using namespace std;

class Teacher
{
protected:
    int pro;

private:
    int pri;

public:
    int age;
    string firstname;
    string subject;

    // protected:
    Teacher(int age, string firstname, string subject, int pro, int pri) : age(age), firstname(firstname), subject(subject), pro(pro), pri(pri)
    {
        cout << pro << endl;
        cout << pri << endl;
        cout << "Firstname \t\t:" << firstname << endl;
        cout << "Subject \t\t:" << subject << endl;
        cout << "Age \t\t\t:" << age << endl;
    };
};

class Coder
{

public:
    string lang;
    Coder()
    {
        cout << "const from codrr class" << endl;
        cout << "Public variable : " << lang << endl;
        cout << "Private variable : " << age << endl;
        cout << "Protected variable : " << salary << endl;
    };

private:
    int age;

protected:
    double salary;
};

class Enginner : protected Coder
{
public:
    int age;
    Enginner()
    {
        cout << "Enginner constr" << endl;
        age = 0;
        cout << lang << endl;
        cout << salary << endl;
        cout << age << endl;
    };
};
int main()
{
    // Teacher t1(22, "nitesh", "compputer science",22, 15);
    // Teacher t2(t1);
    // Coder codr1;
    // Enginner eng1;
    string apple;
    int a;
    double b;
    float c;
    char d;
    cout << apple << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
};
