#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "����������ֵ���������" << endl;
	cin >> a >> c >> b;
	switch (c)
	{
	case '+':
	{
		cout << a + b << endl;
		break;
	}
	case '-':
	{
		cout << a - b << endl;
		break;
	}
	case '*':
	{
		cout << a * b << endl;
		break;
	}
	case '/':
	{
		if (b == 0)
		{
			cout << "����Ϊ0" << endl;
		}
		else
		{
			cout << a / b << endl;
		}
		break;
	}
	case '%':
	{
		cout << int(a) % int(b) << endl;
		break;
	}
	default:
		cout << "ʹ�÷Ƿ������" << endl;
		break;
	}
	return 0;
}