#include <iostream>
#include <string>
using namespace std;
/*
Constructor are of three types-
    parameterised constructor
    non-parameterised construcot
    copy constructor
*/

class Student{
    public:
        string name;
        Student(){
            cout << "Hello, World !" << endl;
        }

        private:
        int age;

        // Student(){
        //     cout << "Hello, World !" << endl;
        // }
       
};


class Teacher{
    public:
        string name;
        double salary;    

    Teacher(string name, double salary){
        this->name = name;
        this->salary = salary;
        cout << "variable Initilization done." << endl;
    }
};
int main(){
   

    return 0;
}