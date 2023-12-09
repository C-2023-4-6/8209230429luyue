#include <iostream>
#include <iomanip>
#include <string>
#include "mytriangle.h"//自建头文件要用“”包括
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
			ss[i] = s[i] - 32;//将字符串转化为Ascall码(含处理大小写)
		counts[ss[i]]++;//表示字符出现的次数		
	}
	for (int j = 0; j < 130; j++)
	{
		if (counts[j] != 0)
			cout << char(j) << ":" << counts[j] << "个" << endl;
	}

}

int main()
{
	char s[31];//输入字母（字符串)
	cin.getline(s, 31);
	count(s);
	return 0;




	system("pause");
	return 0;
}
}