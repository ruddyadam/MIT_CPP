#include <iostream>

using namespace std;

int main(){
	int numberOfPrimes;
	int foundPrimes = 0;
	int prime = 1;
	int testFactor;
	int testPrime = 2;
	
	cout << "How many primes would you like to find? " << endl;
	cin  >> numberOfPrimes;
	cout << endl;
	
	while (foundPrimes < numberOfPrimes){
		for(testFactor = 2; testFactor * testFactor <= testPrime; ++testFactor){
			if(testPrime % testFactor == 0){
				prime = 0;
				break;
			}
		}
		if(prime){
			cout << testPrime << endl;
			foundPrimes++;
		} 
				
		prime = 1;
		testPrime++;
	}
	
	return 0;
}
