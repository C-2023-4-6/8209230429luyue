#include <iostream>
#include <iomanip>
#include <string>
#include "student.h"
using namespace std;
//student.cpp                     �ڴ��ļ��н��к����Ķ���
void Student::set_value(void)
{
    cin >> num;
    cin >> name;
    cin >> sex;
}
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << printf("%s", name) << endl;
    cout << "sex:" << sex << endl;
}
void Student::xstudent(int num, string name, char sex)
{
    num = num;
    name = name;
    sex = sex;
}
