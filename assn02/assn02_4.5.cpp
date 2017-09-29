#include <iostream>

int numOfNums;
std::cout << "How many numbers will you be adding? " + std::endl;
std::cin >> numofNums;
int arrayOfNums[numOfNums];

int sumArray(int numOfNums, int arrayOfNums){
    int sums = 0;
    for(int i=0;i<numofNums;i++){
        arrayOfNums[i] += sums;
    }
    return sums;
}
int main(){
    std::cout << "Please enter numbers: " + std::endl;
    int numForArray = 0;
    for(int i=0,i<numOfNums,i++){
        std::cin >> numForArray;
        arrayOfNums[i] = numForArray;
    }
    std::cout << sumArray(numOfNums, arrayOfNums);
}