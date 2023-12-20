#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	void yige(int x = 60, int y = 80)
	{
		x = x;
		y = y;
		cout << x << "," << y << endl;
	}
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << x << "," << y << endl;
	}
};
point dian;
int main()
{
	int i, j;
	cin >> i >> j;
	dian.yige(60, 80);
	dian.setPoint(i, j);
	dian.display();

	system("pause");
	return 0;
}