#include <iostream>
#include <iomanip>
#include <string>
#include "mytriangle.h"//�Խ�ͷ�ļ�Ҫ�á�������
using namespace std;
int taozi(int day, int x)
{
	if (day == 0)
	{
		return x;
	}
	else
	{
		return taozi(day - 1, (x + 1) * 2);
	}

}
int main()
{
	int day = 9, x = 1;
	cout << taozi(day, x) << endl;
	system("pause");
	return 0;
}