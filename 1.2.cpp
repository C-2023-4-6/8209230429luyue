#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int r,h,s;
	float pi = 3.14;
	cin >> r >> h;
	cout <<"r="<<r<<"h="<<h<<"s="<< ( pi * r * r * h) / 3 << endl;
	return 0;
}