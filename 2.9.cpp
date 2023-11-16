#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
	double j = 0.8, b, a = 0;
	int i = 2;
	for (; i <= 100; i = 2 * i)
	{
		a += i * j;
		b = (a / log2(i));
	}
	cout << b << endl;
	system("pause");
	return 0;
}