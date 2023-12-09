#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	int a,b,c;
	cin >> a>> b >> c;
	if ((a < b + c) && (b < a + c) && (c < a + b))
	{
		if (a == b && b == c)
		{
			cout << "该三角形为等腰三角形" << endl;
			cout << "周长为" << a + b + c << endl;
		}
		else
		{
			cout << "该三角形不为等腰三角形" << endl;
			cout << "周长为" << endl;
		}
	}
	else 
	{
		cout << "该三边无法构成三角形" << endl;
	}
	system("pause")
	return 0;
}