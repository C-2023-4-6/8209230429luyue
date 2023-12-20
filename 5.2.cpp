#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
using namespace std;
int main()
{
	Student stud;                //定义对象
	stud.set_value();
	stud.display();  //执行stud对象的display函数
	Student stud1;
	stud1.xstudent(007, "tcg", 'm');




	system("pause");
	return 0;
}