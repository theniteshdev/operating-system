#include <iostream>
#include <string>
using namespace std;

class Person{
    public: 
        char gender;
        string nationality;
        string name;
        int age;
};

class Student: public Person{
    public:
        int rollNo;
};

class NaughtPerson{
    public:
        bool isNaughty;
};

class GradutedStudent: public Student, public NaughtPerson{
    public:
        string research_area;
};

int main(){

    return 0;
}