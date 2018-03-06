#include <iostream>

/*pseudocode
declare variables a,b
function taking pass by reference
temporary reference holder c
*/




void swapValues(int &a, int &b);

int main(){

    int first = 1;
    int second = 2;

    swapValues(first, second);

    std::cout << "Was 1, is " << first << std::endl;
    std::cout << "Was 2, is " << second << std::endl;

    return 0;
} 

void swapValues(int &a, int &b){
    int tempval = a;
    a = b;
    b = tempval;
    
}