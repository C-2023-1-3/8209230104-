#include<iostream>
using namespace std;
int main() {
	double a = 0.8, b = 2, m = 0, d = 0, e;
	for (b = 2; b <= 100; b = b * 2) {
		m = m + a * b;
		d++;
	}
	e = m / d;
	cout << "ƽ��ÿ�컨��" << e << endl;
	system("pause");
	return 0;
}