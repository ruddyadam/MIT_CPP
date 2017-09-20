#include <iostream>

using namespace std;

main()
{
	int a;
	cout << "a number" << endl;
	cin >> a;
	int i = 0;
	do{
        cout << "Hello World"<< endl;
        i++;
	}
	while(i<a);

	return 0;
}