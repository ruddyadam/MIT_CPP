#include <iostream>

using namespace std; //added namespace

int sum(const int x, const int y, const int z); //added prototype, const int z

int main(){
    cout << sum(1,2,3); //should print 6
    return 0;
}

int sum(const int x, const int y, const int z){//added const in z
    return x + y + z;
}