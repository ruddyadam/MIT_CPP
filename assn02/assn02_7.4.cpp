#include <iostream>



void swap(int *ptr1, int *ptr2);

int main(){

    int x = 5; 
    int y = 6;
    int *ptr1 = &x;
    int *ptr2 = &y;
    
    //std::cout << "ptr1 address before swap is %d\n", ptr1 << std::endl;
    //std::cout << "ptr2 address before swap is %d\n", ptr2 << std::endl;
    
    swap(ptr1, ptr2);  //why does the & before the ptrs give an error?
    std::cout << *ptr1 << ' ' << *ptr2; // Prints "6 5"

}

void swap(int *ptr1, int *ptr2){
    int tempPtr = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = tempPtr; 
    //std::cout << "ptr1 address after swap is %d\n", ptr1 << std::endl;
    //std::cout << "ptr2 address after swap is %d\n", ptr2 << std::endl;

}

