#include <iostream>
#include <iomanip>
#include <string>
#include "mytriangle.h"//�Խ�ͷ�ļ�Ҫ�á�������
using namespace std;
void count(const char s[])
{
	char ss[31];
	int counts[130] = { 0 };
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			ss[i] = s[i];
		else
			ss[i] = s[i] - 32;//���ַ���ת��ΪAscall��(�������Сд)
		counts[ss[i]]++;//��ʾ�ַ����ֵĴ���		
	}
	for (int j = 0; j < 130; j++)
	{
		if (counts[j] != 0)
			cout << char(j) << ":" << counts[j] << "��" << endl;
	}

}

int main()
{
	char s[31];//������ĸ���ַ���)
	cin.getline(s, 31);
	count(s);
	return 0;




	system("pause");
	return 0;
}
}