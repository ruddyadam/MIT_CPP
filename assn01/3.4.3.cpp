#include<iostream>

using namespace std;

int main(){
	int number;
	
	while(true){
	cout << "Enter a positive or negative number" << endl;
	cin >> number;

	if (number < 0){
		cout << "Goodbye!" << endl;
		break;
	}
	
	if (number%5!=0) continue;
		cout << number/5 << endl;
		
	}
	
	return 0;
	
}