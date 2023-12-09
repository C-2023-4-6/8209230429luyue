#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
	double a, b[50], c;
	cin >> a;
	if (a < 0)
	{
		cout << "无平方根" << endl;
	}
	else
	{
		b[0] = a;
		for (int i = 0; fabs(b[i + 1] - b[i]); i++)
		{

			c = b[i + 1] = (b[i] + a / b[i]) / 2;

		}
		cout << c << endl;
	}



	return 0;
}