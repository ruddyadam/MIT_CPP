//this does not work, will discuss later.

#include <iostream>

int main(){

    int WIDTH;
    int LENGTH;

    std::cout << "enter number of arrays in the array: ";
    std::cin >> WIDTH;
    std::cout << std::endl;
    std::cout << "enter number of elements in each array: ";
    std::cin >> LENGTH;
    std::cout << std::endl;

    int input[WIDTH][LENGTH];

    std::cout << "Enter elements:" << std::endl;
    for(int w=0; w<WIDTH; w++){
        for(int l=0; l<LENGTH; l++){
        std::cin >> input[w][l];
        }
    }

    std::cout << std::endl;   
    std::cout << "Original" << std::endl;

    for(int w=0; w<WIDTH; w++){
        for(int l=0; l<LENGTH; l++){
            std::cout << "[" << input[w][l] << "]";
        }
    std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Transposed" << std::endl;

    transpose(int input[int WIDTH][int LENGTH]);

int transpose(const int input[][int LENGTH]){
    int output[LENGTH][WIDTH];
    for(int l=0; l<LENGTH; l++){
        for(int w=0; w<WIDTH; w++){
         output[l][w] = input[w][l];
         std::cout << "[" << output[i][j] << "]";
        }
    std::cout << endl;
    }
    return output;
}

}