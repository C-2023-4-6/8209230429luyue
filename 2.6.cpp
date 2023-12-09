#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int min(int x, int y) 
{
	int e;
	e = (x > y ? y : x);
	return e;
}

int max(int q, int w)
{
	int u;
	u = (q > w ? q : w);
	return u;
}

int main() 
{
	int a, b;
	cin >> a >> b;
	int i = min(a, b);
	for (; i <= a && i <= b; i--) 
	{
		int c, d;
		c = a % i;
		d = b % i;
		if (c == 0 && d == 0) 
		{
			cout << "最小公因数为" << i << endl;
			break;
		}
		if (c != d && c == d != 0) 
		{
			cout << "最小公因数为" << 1 << endl;
			break;
		}
	}

	int h = min(a, b);
	for (; h <= a && h <= b; h--) 
{
		int v = max(a, b);
		    int c, d;
			c = a % h;
			d = b % h;
			if (c == 0 && d == 0) 
			{
				cout << "最小公倍数为" << a*b/h << endl;
				break;
			}
			if (c != d && c == d != 0) 
			{
				cout << "最小公倍数为" << a *b / h << endl;
				break;
			}
	}
	return 0;
}