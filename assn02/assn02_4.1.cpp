#include <iostream>

int sum(const int x, const int y){
    return x + y;
}

double dubSum(const double x, const double y){
    return x + y;
}


main(){
    std::cout << sum(5, 1000.0000);//1000.000 did not produce a syntax error
    return 0;
}