#include <iostream>
using namespace std;
bool is_valid(double side1, double side2, double side3) 
{
	if ((side1 + side2) > side3 && (side1 + side3) > side2 && (side3 + side2) > side1) 
	{
		cout << "����Ϸ�" << endl;
		return true;
	}
	else 
	{
		cout << "���벻�Ϸ�" << endl;
		return false;
	}
}
double _area(double side1, double side2, double side3)
{
	double sqrt;
	double s = (side1 + side2 + side3) / 2;
	return s*(s - side1)*(s - side2)*(s - side3);
	
}