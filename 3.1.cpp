#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int min(int & x, int & y)
{
	int e;
	e = (x > y ? y : x);
	for (; e <= x && e <= y; e--)
	{
		int c, d;
		c = x % e;
		d = y % e;
		if (c == 0 && d == 0)
		{
			//cout << "��С������Ϊ" << e << endl;
			break;
		}
		if (c != d && c == d != 0)
		{
			cout << "��С������Ϊ" << 1 << endl;
			break;
		}
	}
	return e;
}
int max(int& q, int& w)
{
	int u;
	u = (q > w ? w : q);
	for (; u <= q && u <= w; u--)
	{
		int c, d;
		c = q % u;
		d = w % u;
		if (c == 0 && d == 0)
		{
			//cout << "��С������Ϊ" << q*w/u  << endl;
			break;
		}
		if (c != d && c == d != 0)
		{
			//cout << "��С������Ϊ" << q * w / u << endl;
			break;
		}
	}
	return (q * w / u);
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "���Լ��Ϊ" << min(m, n) << endl;
	cout << "��С������Ϊ" << max(m, n) << endl;



	system("pause");
	return 0;
}