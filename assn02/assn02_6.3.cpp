//this does not work, will discuss later


#include <iostream>

void transpose(int input[][LENGTH], int output[][WIDTH]){
    for(int l=0; l<LENGTH; l++){
        for(int w=0; w<WIDTH; w++){
         output[l][w] = input[w][l];
         std::cout << "[" << output[i][j] << "]";
        }
    std::cout << endl;
    }    
}

int main(){

    const int WIDTH;
    const int LENGTH;
    //Elizabeth with some next level algorithms 10.6.17  //==['n'] m]['////////////////////////////////////////////////////////////////////////// ;[=/']=]'/;p-=[;/;p-098uytfxxdf[]]
    //,,,,8kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk,l00[[[[[[[[[[poiutq  ]]]]]]]]]]

    std::cout << "enter number of arrays in the array: ";
    std::cin >> WIDTH;
    std::cout << std::endl; //badfghjkkvccjklkjhcxzxcjk;'
    //p;[[[[[[[[[[[=[pl,m   9u0uygcxcftyu90ugfguiiugcb ]]]]]]]]]]]]    //<-- extreme array nesting

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
    int transpose(input[WIDTH][LENGTH], output[LENGTH][WIDTH]);
#if 0    
    for(int l=0; l<LENGTH; l++){
        for(int w=0; w<WIDTH; w++){
            output[l][w] = input[w][l];
            std::cout << "[" << output[l][w] << "]";
        }
    std::cout << std::endl;
    }
#endif
//#if 0

//#endif
}