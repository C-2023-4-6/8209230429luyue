#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float f;
	cin >> f;
	float x = (f - 32.00) / 1.8;
	cout << "�����뻪���¶�=" << f << "���϶�Ϊ=" << setprecision(4) << x << endl;


	system("pause")
	return 0;
}