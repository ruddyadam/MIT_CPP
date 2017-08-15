#include<iostream>

using namespace std;

int main(){
	int number;
	
	while(1){
	cout << "Enter a positive or negative number" << endl;
	cin >> number;
	if (number%5!=0 or number<0) continue;
		cout << number/5 << endl;
	}
}