#include <iostream>

using namespace std; //added namespace

void doubleNumber(int& num);//added prototype with &arg

int main(){
    int num = 35;
    doubleNumber(num); //why doesnt this have to have a &
    cout << num; // Should print 70, removed std::
    return 0;
}

void doubleNumber(int& num){ //moved tthis down, added &arg
    num = num * 2;
}