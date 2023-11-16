#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	char x;
	cin >> x;
	if (65<=x < 97) 
	{
		cout << static_cast<char>(x-32) << endl;

	}
	else
	{ 
		cout << static_cast<char>(x +1) << endl;
	}
	
	system("pause")
	return 0;
} 