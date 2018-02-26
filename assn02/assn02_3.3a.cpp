#include <iostream>

using namespace std; //added namespace

void doubleNumber(int num);//added prototype with arg
                           //why does this not need a & in the prototype
                           
int main(){
    int num = 35;
    doubleNumber(num); //why doesnt this have to have a &
    cout << num; // Should print 70, removed std::
    return 0;
}

void doubleNumber(int& number){ //moved tthis down, added &arg
    number = number * 2;
}