#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	float x;
	cin>>x;
	if (0 < x&&x < 1) {
		float y = 3 - 2 * x;
		cout << y << endl;
	}
	else
		if (1 <= x &&x< 5) 
	{
		float y = 2/(4 * x) + 1;
		cout << y << endl;
	}
	else if (5 <= x&&x < 10) 
	{
		float y = x * x;
		cout << y << endl;
	}
	else
	{
		cout << "x不符合条件" << endl;
	}
	system("pause")
	return 0;
}