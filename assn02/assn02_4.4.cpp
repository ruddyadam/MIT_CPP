#include <iostream>


//hmm I inadvertently switched the order of int and const.  how does this change things?
int sum(const int a, const int b, const int c=0, const int d=0){
    return a + b + c + d;
}
int sum(const int x, const int y, const int z){
    return x + y + z;
}
main(){
    std::cout << sum(1,2,3);
}

//assn02_4.3.cpp:10:27: error: call of overloaded ‘sum(int, int, int)’ is ambiguous
//std::cout << sum(1,2,3);
//it looks like that although you can overload functions, you cannot have 2 funcitons
//that can legally take the same arguments.  This apparently causes an ambiguity error.
