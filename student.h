#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void xstudent(int num, string name, char sex);
	void set_value();
private:
	int num;
	char name[20];
	char sex[2];
};
