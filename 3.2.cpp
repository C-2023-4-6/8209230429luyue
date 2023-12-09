#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
bool is_prime(int num)
{
	for (int a = 2; a <= num; a++)
	{
		if (num == 1)
		{
			cout << "ÎÞ·¨ÅÐ¶Ï" << endl;
		}
		else
		{
			int b = num % a;
			if (b == 0 && a != num)
			{
				return false;
				break;
			}
			else if (a == num)
			{
				return true;
			}

		}
	}
}
int main()
{
	int n = 0;
	for (int x = 1;; x++)
	{
		if (is_prime(x) == 1)
		{
			n++;
			cout << x << " ";
		}
		if (n % 10 == 0)
		{
			cout << endl;
		}

		if (n > 200)
		{
			break;
		}
	}



	system("pause");
	return 0;
}