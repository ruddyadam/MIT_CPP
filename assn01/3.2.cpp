#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int numberOfIntegers;
    cout << "number of integers" << endl;
    cin >> numberOfIntegers;
	
    int integers[numberOfIntegers];
	
	cout << endl << "enter integers:" << endl;
    for(int iterator = 0; iterator < numberOfIntegers; iterator++){
        cin >> integers[iterator];
        }
    cout << endl;
	
	//cout << "min: " << min_element(integers, integers + numberOfIntegers);
	int min = integers[0];
	for(int i = 0; i < numberOfIntegers; i++){
		if(integers[i] < min){
			min = integers[i];
		}	
	}
	cout << "min: " << min;
	cout << endl;
	
	//cout << "max: " << max_element(integers.begin(), integers.end());
	int max = integers[0];
	for(int i = 0; i < numberOfIntegers; i++){
		if(integers[i] > max){
			max = integers[i];
		}
	}
	cout << "max: " << max;
	cout << endl;

	//cout << "mean: " << mean(integers.begin(), integers.end());	
	int mean = 0;
	for(int i = 0; i < numberOfIntegers; i++){
		mean += integers [i];
	}
	cout << "mean: " << mean/numberOfIntegers;
	


	
	//print array	
	
	// calculate high low and mean
		
	//print out high low and mean
	cout << endl;
    cout << "done";
    return 0;
}