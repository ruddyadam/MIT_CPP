#include <iostream>

using namespace std;

const int ARRAY_LEN = 10;

int main(){
    int arr[ARRAY_LEN] = {10}; //note the inplicit initialization of other elements
    int *xPtr = arr, *yPtr = arr + ARRAY_LEN -1; //added * before yPtr
    cout << *xPtr << ' ' << *yPtr; // Should output 10 0
    return 0;
}