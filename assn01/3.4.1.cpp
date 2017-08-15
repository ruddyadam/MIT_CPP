#include<iostream>

using namespace std;

int main(){
	double number;
	
	while(1){
	cout << "Enter a positive or negative number" << endl;
	cin >> number;
	(number%5==0 && number>0) ? (cout << number/5 << endl) : (cout << -1 << endl);
	
	}
}