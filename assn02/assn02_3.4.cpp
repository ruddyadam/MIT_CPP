#include <iostream>
#include <cstdlib> // contains some math functions

using namespace std; //added namespace

int difference(const int x, const int y); // added prototype

int main(){
    cout << difference(24, 1238); //removed std::
    return 0;
}

int difference(const int x, const int y){
    int diff = abs(x-y); // abs(n) returns absolute value of n
    return diff;// added this to return the calculation
}