#include <iostream>

using namespace std; // fix 1: added namespace

void printNum(int number); //fix 2: added prototype

int main(){
    printNum(35);
    return 0;
}

void printNum(int number){
    cout << number;
}