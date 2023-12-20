#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
using namespace std;
class chang
{
private:
	int length;
	int width;
	int height;
public:
	void cin_chang(void)
	{
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void cout_chang(void)
	{
		int v;
		v = length * width * height;
		cout << v << endl;
	}

};
chang c1;
chang c2;
chang c3;
int main()
{
	c1.cin_chang();
	c1.cout_chang();
	c2.cin_chang();
	c2.cout_chang();
	c3.cin_chang();
	c3.cout_chang();



	system("pause");
	return 0;
}