#include <iostream>
#include <string>
using namespace std;

class Programmer{
    public:
        string favouriteLang;
        int age;
        string experience;
        // own-copy constructor
        Programmer(Programmer &anotherObj) : age(anotherObj.age), favouriteLang(anotherObj.favouriteLang), experience(anotherObj.experience)
        {
            cout << "Copy constructor running." << endl;
        };

    Programmer(int age, string experience, string favouriteLang):age(age), experience(experience), favouriteLang(favouriteLang){
        cout << "constructor running done." << endl;
    };

    // Programmer(){
    //     cout << "Non-parameter construcor running."
    // };
};

int main(){
    Programmer nitesh(14, "2+ years", "Javascript"); // here parameter-constructor called
    Programmer  anurag(nitesh); // here copy constructor called

    cout << anurag.age << endl;
    cout << nitesh.age << endl;

    return 0;
}