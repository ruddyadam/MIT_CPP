#include <iostream>

int main(){
    
    char *oddOrEven = "Never odd or even";
    
    char *nthCharPtr;
    nthCharPtr = &oddOrEven[5]; // 1. 6th item
    nthCharPtr = nthCharPtr - 2; // i am not 100% sure what this is doing
                                 // i could not explain exactly what this means

    std::cout <<  *nthCharPtr << std::endl;
    
    char ** pointerPtr;
    pointerPtr = &nthCharPtr;
    std::cout << **pointerPtr << std::endl;

    nthCharPtr = nthCharPtr + 1;
    std::cout <<  *nthCharPtr << std::endl;    
    std::cout << **pointerPtr << std::endl;

    std::cout << nthCharPtr - oddOrEven << std::endl;

    return 0;
}