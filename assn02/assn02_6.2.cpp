#include <iostream>

void printArray(int array[], int size){
    for(int i=0; i<(size-1); i++){
        std::cout << array[i] << ", ";
        }
    std::cout << array[(size-1)] << std::endl;
}
#if 0
void reverse(int array[], int size){
    int tempVar;
//    for(int i=0;i<size;i++){
    tempVar = array[0];
    std::cout << tempVar << std::endl; 
    array[0] = array[size-1];
    printArray(array,size);
    array[size-1] = tempVar;
    printArray(array, size);
}
#endif

void reverse(int array[], int size){
    int tempVar;
    for(int i=0;i<size/2;i++){  // "/2" because when you have swapped half the array 
                                //with the other half, it is reversed.
        tempVar = array[i];
        std::cout << tempVar << std::endl;
        array[i] = array[size-1-i];
        printArray(array,size);
        array[size-1-i] = tempVar;
        printArray(array, size);
    }
}

//    int tempArray[size];
//    
//    for(int i=0;i<size;i++){
//        int*tempArray[i] = array[size-i]
//
//    }
//    array = tempArray;


//double the size of the array.
//append the items onto the last half in revers order.
//delete the first half.

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = std::end(array) - std::begin(array);
    reverse(array, size);

}