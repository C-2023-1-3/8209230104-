#include<iostream>
using namespace std;
int main() {
	float a;
	float b;
	float c;
	cout << "请你输入三角形的三条边" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a) {
		float l;
		l = a + b + c;
		cout << "三角型的周长为：" << l << endl;
		if (a == b || a == c || b == c) {
			cout << "该三角形为等腰三角形" << endl;
		}
		else {
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "三边不能构成三角形" << endl;
	}


	system("pause");
	return 0;
}