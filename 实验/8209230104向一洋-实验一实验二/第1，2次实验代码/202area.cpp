#include<iostream>
using namespace std;
int main() {
	float x;
	float y;
	cout << "请你输入一个x的值(0<x<10)：" << endl;
	cin >> x;
	if (0 < x < 1) {
		y = 3 - 2 * x;
		cout << y << endl;
	}
	else if (1 <= x && x < 5)
	{
		y = 2 / (4 * x) + 1;
		cout << y << endl;
	}
	else
	{
		y = x * x;
		cout << y << endl;
	}
	system("pause");
	return 0;
}