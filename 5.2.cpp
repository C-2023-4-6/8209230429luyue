#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
using namespace std;
int main()
{
	Student stud;                //�������
	stud.set_value();
	stud.display();  //ִ��stud�����display����
	Student stud1;
	stud1.xstudent(007, "tcg", 'm');




	system("pause");
	return 0;
}