#include <iostream>
#include <iomanip>
#include <string>
#include "mytriangle.h"//自建头文件要用“”包括
using namespace std;
void shuzi(int num[], int x)
{
	for (int i = 0; i < x; i++)
	{
		bool shuzi1 = true;
		for (int j = 0; j < x; j++)
		{
			if (num[i] == num[j] && i != j)
			{
				shuzi1 = false;
				break;
			}
		}
		if (shuzi1)
		{
			cout << num[i] << endl;
		}
	}
}
int main()
{
	int num1[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> num1[i];
	}
	shuzi(num1, 10);








	system("pause");
	return 0;
}