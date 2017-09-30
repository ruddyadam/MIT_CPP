#include <iostream>

int sumNumbers(int size, int *arrayOfNumbers){
    int sumOfNumbers;

    if(*iterator<*size){
        *sumofNumbers += *arrayOfNumbers[];
        sumNumbers(size, *arrayOfNumbers);
    }
    else{
        return sumOfNumbers;
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
    std::cout << sumNumbers(size, &arrayOfNumbers[0]);
}