#include <iostream>

using namespace std;

int main(){
	
	int number;
	cout << "Enter a number: ";
	cin >> number;
	
	cout << "The factorial of " << number << " is ";
	int accumulator = 1;
	
	if (number < 0){
		cout << "Undefined!" << endl;
		return 0;
	
	}
	
	for (; number > 0; accumulator *= number--);
	cout << accumulator << ".\n";
		
	return 0;
}
