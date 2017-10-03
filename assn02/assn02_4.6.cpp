#include <iostream>

//just learning recursion and pointers

int printArray(int size, int *array){
    std::cout << "Array: [";
    for(int i=0;i<size;i++){
        std::cout << array[i];
    }
    std::cout << "]" << std::endl;
}

int sumNumbers(int size, int *arrayOfNumbers){
    if (size == 0){

        return 0;
    }
    else{

        return arrayOfNumbers[size-1] + sumNumbers(size-1, arrayOfNumbers);
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
    printArray(size, arrayOfNumbers);

    std::cout << "Total: " << sumNumbers(size, &arrayOfNumbers[0]);
}