#include <iostream>
#include <cstdlib> //is this necessary?
#include <ctime>

using namespace std;

main(){
    srand(time(NULL));  //if you run the program 
                        //more than once per second, 
                        //srand will give the same seed,
                        //hence the same random number sequence

    double xCoord = rand() / double (RAND_MAX);
    double yCoord = rand() / double (RAND_MAX);
    //cout << xCoord << endl;
    //cout << yCoord;
    
    //double test = rand() / (RAND_MAX + 1.0);
    //cout << (RAND_MAX) << endl;
        
    //for(int i=0;i<20;i++){
    //    cout << rand() << endl;
    //}
}