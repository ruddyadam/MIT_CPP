#include <iostream>

int printArray(int size, int *array){
    std::cout << "Array: [";
    for(int i=0;i<size;i++){
        std::cout << array[i];
    }
    std::cout << "]" << std::endl;
}

int sumNumbers(int iterator, int size, int *arrayOfNumbers){
    if(iterator == size){
        return 0;
    }
    else{
        return arrayOfNumbers[iterator] + sumNumbers(iterator+1, size, arrayOfNumbers);
    }
}

int main(){
    int size;
    std::cout << "How many numbers will you be adding? " << std::endl;
    std::cin >> size;
    int arrayOfNumbers[size];
    std::cout << "Please enter numbers: " << std::endl;
    int number;
    for(int i=0;i<size;i++){
        std::cin >> number;
        arrayOfNumbers[i] = number;
    }
//    printArray(size, arrayOfNumbers);

    std::cout << "Total: " << sumNumbers(0, size, &arrayOfNumbers[0]);
}