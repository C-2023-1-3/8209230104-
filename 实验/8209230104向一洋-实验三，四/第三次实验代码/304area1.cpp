#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "please input side1,side2 and side3:" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3) == 1)
	{
		cout << "the area is:" << double_area(side1, side2, side3) << endl;
	}//如果可以构成三角形就输出面积
	else
	{
		cout << "the side length is not wrongful" << endl;
	}//如果无法构成三角形就显示错误
	system("pause");
	return 0;
}