#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

void checkForHit(double xCoord, double yCoord, int *hits){
    if (sqrt(pow(xCoord,2.0) + pow(yCoord,2.0)) <= 1){
        *hits += 1;
    }
}

main(){
    int n=1000000;   //throws
    int hits = 0;   //landed in circle
    srand(time(NULL));

    for(int i=0; i<n;i++){
        double xCoord = rand() / double (RAND_MAX);
        double yCoord = rand() / double (RAND_MAX);
        checkForHit(xCoord, yCoord, &hits);
        //cout << i;
    }
    cout << hits;
}