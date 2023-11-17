#include<iostream>
using namespace std;
int main() {
	double a, b;
	string c;
	cout << "请输入两个数字" << endl;
	cin >> a >> b;
	cout << "请输入你想做的运算" << endl;
	cin >> c;
	double d;
	if (c == "/" && b == 0)
	{
		cout << "0不能作为除数" << endl;
	}
	else if (c=="-")
	{
		d = a - b;
		cout << d << endl;
	}
	else if (c=="+")
	{
		d = a + b;
		cout << d << endl;
	}
	else if (c=="*")
	{
		d = a * b;
		cout << d << endl;
	}
	else if (c=="/"&&b!=0)
	{
		d = a / b; 
		cout << d << endl;
	}
}