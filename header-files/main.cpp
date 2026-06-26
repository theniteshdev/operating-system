#include <iostream>
#include "maths.h";

double add(int a, int b){
    return a + b;
}

int main(){
    double sum = add(12, 12);
    std::cout << sum << std::endl;
}