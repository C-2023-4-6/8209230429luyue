#include <iostream>
#include <iomanip>
#include <string>
#include "mytriangle.h"//自建头文件要用“”包括
using namespace std;
int parseHex(const char* const hexString)
{
	int m = strlen(hexString);
	int shiliu = 1, n = 0;
	for (int i = m - 1; i >= 0; i--)
	{
		if (hexString[i] >= '0' && hexString[i] <= '9')
		{
			n += (hexString[i] - '0') * shiliu;
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F')
		{
			n += (hexString[i] - 'A' + 10) * shiliu;
		}
		shiliu *= 16;
	}
	return n;

}
int main()
{

	int x = parseHex("A5");
	cout << x << endl;


	system("pause");
	return 0;
}