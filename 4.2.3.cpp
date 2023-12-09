#include <iostream>
#include <iomanip>
#include <string>
#include "mytriangle.h"//自建头文件要用“”包括
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* ss;
	ss = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ss[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << ss[i] << " ";
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (ss[j] > ss[j + 1])
			{
				int temp = ss[j];
				ss[j] = ss[j + 1];
				ss[j + 1] = temp;
			}
		}
	}
	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << ss[i] << endl;
	}



	system("pause");
	return 0;
}