#include <iostream>

using namespace std;

main()
{
	const char *a = "hello w\0orld"; //immutable pointer to mutable string
	cout << a << endl;
	
	a = "hi"; //a cannot change from being a pointer
	cout << a << endl;
	
	return 0;
}