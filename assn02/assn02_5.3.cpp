#include <iostream>
#include <ctime>
#include <cmath>

//This program is a Monte Carlo technique for estimating Pi

using namespace std;

void checkForHit(double xCoord, double yCoord, int *hits){
    if (sqrt(pow(xCoord,2.0) + pow(yCoord,2.0)) <= 1){
        *hits += 1;
    }
}

main(){
    int n=5000000;   //throws
    int hits;        //landed in circle
    float pi;
    srand(time(NULL));

    for(int i=0; i<n;i++){
        double xCoord = rand() / double (RAND_MAX);
        double yCoord = rand() / double (RAND_MAX);
        checkForHit(xCoord, yCoord, &hits);
        //cout << i;
    }
    cout << "Hits: " << hits << endl;
    cout << "Total Thrown: " << n << endl;
    
    pi = 4*((float)(hits)/(float)(n));
    cout << "Monte Carlo estimate of Pi: " << pi;
    //cout << pi;
    return 0;
}