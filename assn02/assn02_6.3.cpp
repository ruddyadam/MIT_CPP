#include <iostream>

int LENGTH = 4;
int WIDTH = 3;

#if 0
void transpose(const int input[LENGTH], const int output[][WIDTH]){
    for(int i=0; i<LENGTH; i++){
        for(int j=0; j<WIDTH; j++){
            output[i][j] = input[i],j;
            std::cout << "[" << output[i][j] << "]";
        }
    std::cout << endl;
    }    
   
}
#endif

int main(){

    std::cout << "enter number of arrays in the array: ";
    std::cin >> WIDTH;
    std::cout << std::endl;

    std::cout << "enter number of elements in each array: ";
    std::cin >> LENGTH;
    std::cout << std::endl;

    int input[WIDTH][LENGTH];
    int output[LENGTH][WIDTH];

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

    for(int l=0; l<LENGTH; l++){
        for(int w=0; w<WIDTH; w++){
            output[l][w] = input[w][l];
            std::cout << "[" << output[l][w] << "]";
        }
    std::cout << std::endl;
    }


}