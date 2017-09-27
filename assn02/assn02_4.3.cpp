#include <iostream>


//am I not supposed to use default values for this exercise?
int sum(int const a, int const b, int const c=0, int const d=0){
    return a + b + c + d;
}

main(){
    std::cout << sum(1,2,3);
}
