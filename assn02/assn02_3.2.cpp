#include <iostream>

using namespace std; //optional fix:  added namespace

void printNum(int number); //fix 1: added prototype

int main(){
    int number = 35;
    printNum(number);
    return 0;
}

void printNum(int number){ //fix 3: added int number arg
    cout << number; //optional: removed "std::"
}//fix 2: removed trailing ";"