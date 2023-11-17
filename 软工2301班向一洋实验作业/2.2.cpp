#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "请输入x的值： " << endl;
	cin >> x;
	if (0<x&&x<10)
	{
		if (0 < x && x < 1)
		{
			y = 3 - 2 * x;
		}
		else if (1 <= x && x < 5)
		{
			y = 2 / (4 * x) + 1;
		}
		else if (5 <= x && x < 10)
		{
			y = x * x;
		}
		cout << "y 的值为：  " << y << endl;
	}
	else
	{
		cout << "请输入1到9的x" << endl;
	}
}