#include <iostream>

void printArray(int array[], int size){
    for(int i=0; i<(size-1); i++){
        std::cout << array[i] << ", ";
        }
    std::cout << array[(size-1)] << std::endl;
}

void reverse(int array[], int size){
    int tempVar;
    for(int i=0;i<size/2;i++){  // "/2" because when you have swapped half the array 
                                //with the other half, it is reversed.
        tempVar = array[i];
        //std::cout << tempVar << std::endl;    //testing
        array[i] = array[size-1-i];
        //printArray(array, size);              //testing
        array[size-1-i] = tempVar;
        //printArray(array, size);              //testing
    }
}

int main(){
    int array[] = {1,2,3,4,5,6,7};
    int size = std::end(array) - std::begin(array); //calculates size
    std::cout << "The original array is: "; 
    printArray(array, size);
    reverse(array, size);
    std::cout << "The reversed array is: ";
    printArray(array, size);
}

//ideas:
//double the size of the array.
//append the items onto the last half in revers order.
//delete the first half.

#if 0
//first try at reversing the array without using another array

void reverse(int array[], int size){
    int tempVar;
    for(int i=0;i<size;i++){
        tempVar = array[0];
        std::cout << tempVar << std::endl; 
        array[0] = array[size-1];
        printArray(array,size);
        array[size-1] = tempVar;
        printArray(array, size);
    }
}
#endif