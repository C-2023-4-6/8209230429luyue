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
			//cout << "最小公因数为" << e << endl;
			break;
		}
		if (c != d && c == d != 0)
		{
			cout << "最小公因数为" << 1 << endl;
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
			//cout << "最小公倍数为" << q*w/u  << endl;
			break;
		}
		if (c != d && c == d != 0)
		{
			//cout << "最小公倍数为" << q * w / u << endl;
			break;
		}
	}
	return (q * w / u);
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "最大公约数为" << min(m, n) << endl;
	cout << "最小公倍数为" << max(m, n) << endl;



	system("pause");
	return 0;
}