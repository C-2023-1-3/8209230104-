#include<iostream>
using namespace std;
int main() {
	cout << "��������������a��b" << endl;
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
	cout << "a��b����С������Ϊ��" << c << endl;
	cout << "a��b�����Լ��Ϊ��" << b << endl;

	system("pause");
	return 0;
}