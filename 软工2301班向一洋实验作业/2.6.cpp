#include<iostream>
using namespace std;
int main() {
	int a;
	int b;
	cout << "请输入两个整数" << endl;
	cin >> a;
	cin >> b;
	int min = 1;   int max;
	for (int i = 2; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			min = i;
			break;
		}
	}
	max = a * b / min;
	cout << "最小公倍数" << min << endl;
	cout << "最大公约数" << max << endl;
}
