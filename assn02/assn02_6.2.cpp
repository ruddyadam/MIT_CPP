#include <iostream>

void printArray(int array[], int size){
    for(int i=0; i<(size-1); i++){
        std::cout << array[i] << ", ";
        }
    std::cout << array[(size-1)] << std::endl;
}

void reverse(int array[], int size){
    int tempElement;
    for(int i=0;i<size/2;i++){  // "/2" because when you have swapped half the array 
                                //with the other half, it is reversed.
        tempElement = array[i];
        //std::cout << tempVar << std::endl;    //testing
        array[i] = array[size-1-i];
        //printArray(array, size);              //testing
        array[size-1-i] = tempElement;
        //printArray(array, size);              //testing
    }
}

int main(){
    int evenArray[] = {1,2,3,4,5,6,7,8};
    int oddArray[] = {1,2,3,4,5,6,7};
    int evenSize = std::end(evenArray) - std::begin(evenArray); //calculates size of array
    int oddSize = std::end(oddArray) - std::begin(oddArray); //calculates size of array
    std::cout << "The original even array is: "; 
    printArray(evenArray, evenSize);
    std::cout << "The original odd array is: "; 
    printArray(oddArray, oddSize);    
    reverse(evenArray, evenSize);
    reverse(oddArray, oddSize);

    std::cout << "The reversed even array is: ";
    printArray(evenArray, evenSize);
    std::cout << "The reversed odd array is: ";
    printArray(oddArray, oddSize);
}

//ideas:
//double the size of the array.
//append the items onto the last half in reverse order.
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