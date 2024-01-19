#include<iostream>
using namespace std;
bool is_valid(double side1, double side2, double side3)//定义判断是否构成一个三角形的函数
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
double double_area(double side1, double side2, double side3)//定义求三角形面积的函数
{
	int s, area;
	s = (side1 + side2 + side3) / 2;
	area = sqrt(s * (s - side1)*(s - side2)*(s - side3));
	return area;
}