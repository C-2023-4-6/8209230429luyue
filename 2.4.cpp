#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "请输入两个值及运算符号" << endl;
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
			cout << "除数为0" << endl;
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
		cout << "使用非法运算符" << endl;
		break;
	}
	return 0;
}