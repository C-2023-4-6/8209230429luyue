#include <iostream>
#include <iomanip>
#include <string>
#include "mytriangle.h"//�Խ�ͷ�ļ�Ҫ�á�������
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int m = strlen(s1), n = strlen(s2);
	for (int i = 0; i <= n - m; i++)
	{
		bool zifu = true;
		for (int j = 0; j < m; j++)
		{
			if (s1[j] != s2[i + j])
			{
				zifu = false;
				break;
			}
		}
		if (zifu)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	char s1[20] = { 0 };
	cin.getline(s1, 20);
	char s2[20] = { 0 };
	cin.getline(s2, 20);
	int x = indexof(s1, s2);
	cout << "indexOf(s1, s2)" << "is" << x << endl;



	system("pause");
	return 0;
}
