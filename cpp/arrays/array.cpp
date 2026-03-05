#include <iostream>
using namespace std;

int totalChaiServed(int chai[], int size){
    int total = 0;
    for(int i = 0; i<size; i++){
        total += chai[i];
    };
    return total;
}

int* prepareChai(int cups){
    int* orders = new int[cups];
    for(int i = 0; i < cups; i++){
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

int main(){
    // Arrays
    int temps[] = {44,33,56,76,90, 100};
    for(int i = 0; i <= 5; i++){
        cout << temps[i] << " degree celcius." << endl;
    }

    // passing arrays on function
    int chaiServed[7] = {1,1,1,1,1,1,4};
    cout << totalChaiServed(chaiServed, 7) << endl;

    // pointers
    int* chaiOrders = prepareChai(5);
    cout << "-----------" << endl;
    for(int i = 0; i < 5; i++){
        cout << chaiOrders[i] << endl;
    }

    // 2D Arrays
    int chais[3][2] = {
        {45, 33},
        {12, 22},
        {46, 77},
    };

    for(int i = 0; i < 3; i++){
        cout << "From shop: " << i+1 << endl;
        for(int j = 0; j < 2; j++){
            cout << "\t Chai: " << chais[i][j] << " \t";
        }
        cout << endl;
    }
    return 0;
}