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
			cout << "��������Ϊ����������" << endl;
			cout << "�ܳ�Ϊ" << a + b + c << endl;
		}
		else
		{
			cout << "�������β�Ϊ����������" << endl;
			cout << "�ܳ�Ϊ" << endl;
		}
	}
	else 
	{
		cout << "�������޷�����������" << endl;
	}
	system("pause")
	return 0;
}