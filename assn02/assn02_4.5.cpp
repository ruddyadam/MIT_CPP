#include <iostream>

int sumNumbers(int size, int arrayOfNumbers[]){
    int sumOfNumbers;
    for(int i=0;i<size;i++){
        sumofNumbers += arrayOfNumbers[i];
    }
    return sums;
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
    std::cout << sumNumbers(size, arrayOfNumbers);
}