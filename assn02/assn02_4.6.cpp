#include <iostream>

int sumOfNumbers;
int iterator = 0;

int sumNumbers(int size, int *arrayOfNumbers){
    if(*iterator<*size){
        *sumofNumbers += *arrayOfNumbers[*iterator];
        *iterator += 1;
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