#include <iostream>
#include <iomanip>
#include <string>
#include "mytriangle.h"//�Խ�ͷ�ļ�Ҫ�á�������
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	int x = is_valid(a, b, c);
	double sqrt = _area(a, b, c);
	cout << sqrt << endl;


	system("pause");
	return 0;
}