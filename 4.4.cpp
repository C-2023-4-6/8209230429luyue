#include <iostream>
#include <iomanip>
#include <string>
#include "mytriangle.h"//自建头文件要用“”包括
using namespace std;
void merge(int list1[], int size1, int list2[], int size2, int list3[])
{
	cout << "enter list1:";
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "enter list2:";
	for (int j = 0; j < size2; j++)
	{
		cin >> list2[j];
	}

	int i = 0;
	int m = 0;
	while (i < size1)
	{
		list3[i] = list1[m];
		i++;
		m++;
	}
	i = size1;
	int n = 0;
	while (i < size1 + size2)
	{
		list3[i] = list2[n];
		i++;
		n++;
	}

}
int main()
{
	int list1[] = { 0 };
	int list2[] = { 0 };
	int list3[] = { 0 };
	int size1, size2;
	cin >> size1;
	cin >> size2;
	merge(list1, size1, list2, size2, list3);
	for (int i = 0; i < size1 + size2 - 1; i++)
	{
		for (int j = 0; j < size1 + size2 - 1 - i; j++) {
			if (list3[j] > list3[j + 1]) {
				int temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
			}
		}
	}
	cout << "the result is:" << endl;
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << " ";
	}


	system("pause");
	return 0;
}
}