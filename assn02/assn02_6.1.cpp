#include <iostream>

void printArray(int array[], int size){
    for(int i=0; i<(size-1); i++){
        std::cout << array[i] << ", ";
        }
    std::cout << array[(size-1)];
}

main(){

    int array[5] = {1,2,3,4,5};
    int size = std::end(array) - std::begin(array);
    std::cout << "Length: " << size << std::endl;
    printArray(array, size);

    return 0;
}