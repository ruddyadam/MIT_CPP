#include <iostream>

int sumNumbers(int size, int arrayOfNums[]){
    int sums = 0;
    for(int i=0;i<size;i++){
        arrayOfNums[i] += sums;
    }
    return sums;
}
int main(){
    int size;
    std::cout << "How many numbers will you be adding? " << std::endl;
    std::cin >> size;
    int arrayOfNums[size];
    std::cout << "Please enter numbers: " << std::endl;
    int numForArray = 0;
    for(int i=0;i<size;i++){
        std::cin >> numForArray;
        arrayOfNums[i] = numForArray;
    }
    std::cout << sumNumbers(size, arrayOfNums);
}