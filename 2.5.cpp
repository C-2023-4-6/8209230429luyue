#include<iostream>
#include <iomanip>
#include<string>
using namespace std;


int main() 
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;
while (1)
{
	char f;
	f=cin.get();
	int n = int(f);
		
	if (n < 122 && n>65) {
		a++;
	}
	else if (n == 32) {
		b++;
	}
	else if (n > 49 && n < 57) {
		c++;
	}
	else 
		d++;
		int x = d - b;

		cout << "Ӣ����ĸ��" << a << "��" << "�ո���" << b << "��" << "�����ַ���" << c << "��" << "��������" << nh << "��" << endl;
	}
	return 0;
}