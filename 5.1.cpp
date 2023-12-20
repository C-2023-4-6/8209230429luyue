#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void cin_t(void)
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	};
	void cout_t(void)
	{
		cout << hour << "£º" << minute << "£º" << sec << endl;
	}

};
Time t1;
int main()
{
	t1.cin_t();
	t1.cout_t();




	system("pause");
	return 0;
}