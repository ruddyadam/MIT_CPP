#include <iostream>

using namespace std;

main()
{
	int arg1;
	arg1 = -1;
	{
		char arg1 = 'a';
		cout << arg1 << "\n";
	}
    cout << arg1;
	return 0;
}