#include <iostream>

/*pseudocode
declare variables a,b
function taking pass by reference
temporary reference holder c
*/




void ptrSwapValues(int *a, int *b);

int main(){

    int first = 1;
    
    int second = 2;

    ptrSwapValues(&first, &second); //when the function takes ptr args, pass &s

    std::cout << "Was 1, is " << first << std::endl;
    std::cout << "Was 2, is " << second << std::endl;

    return 0;
} 

void ptrSwapValues(int *a, int *b){
    int tempval = *(a);//these *s are for dereferencing, getting the value at that address
    *a = *b;
    *b = tempval;
    
}