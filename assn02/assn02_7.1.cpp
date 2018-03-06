#include <iostream>
//function that returns the lenth of a string


int lengthOfString(const char* myString);


int main(){

    const char* myString = "billybob";
    std::cout << lengthOfString(myString) << std::endl;

    return 0;
}

int lengthOfString(const char* myString){
    
    int myLen = 0;
    
    while(*myString){
        *myString++;
        myLen++;
    }
    return myLen;
}