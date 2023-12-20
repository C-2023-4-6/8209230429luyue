#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
using namespace std;
class chengji
{
public:
	chengji(int num, int score)
	{
		this->num = num;
		this->score = score;
	}
	int num;
	int score;
	void max(chengji* ps[]);
};
void chengji::max(chengji* ps[])
{

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (ps[j]->score > ps[j + 1]->score)
			{
				chengji* a = ps[j];
				ps[j] = ps[j + 1];
				ps[j + 1] = a;
			}
		}
	}
	cout << (ps[4])->score << endl;

}
int main()
{
	chengji* a1 = new chengji(15, 54);
	chengji* a2 = new chengji(28, 56);
	chengji* a3 = new chengji(29, 66);
	chengji* a4 = new chengji(12, 77);
	chengji* a5 = new chengji(19, 34);

	chengji* ps[5] = { a1,a2,a3,a4,a5 };
	chengji m(1, 2);
	m.max(ps);

	system("pause");
	return 0;
}