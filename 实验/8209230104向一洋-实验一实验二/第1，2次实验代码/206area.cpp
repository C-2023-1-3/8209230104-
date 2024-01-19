#include<iostream>
using namespace std;
int main() {
	cout << "请输入两个数字a、b" << endl;
	int a, b, c, z;
	cin >> a >> b;
	c = a * b;
	if (b > a) {
		z = a;
		a = b;
		b = z;
	}
	while (a % b) {
		z = b;
		b = a % b;
		a = z;
	}
	c = c / b;
	cout << "a与b的最小公倍数为：" << c << endl;
	cout << "a与b的最大公约数为：" << b << endl;

	system("pause");
	return 0;
}