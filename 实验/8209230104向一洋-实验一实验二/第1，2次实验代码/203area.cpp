#include<iostream>
using namespace std;
int main() {
	float a;
	float b;
	float c;
	cout << "�������������ε�������" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a) {
		float l;
		l = a + b + c;
		cout << "�����͵��ܳ�Ϊ��" << l << endl;
		if (a == b || a == c || b == c) {
			cout << "��������Ϊ����������" << endl;
		}
		else {
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else {
		cout << "���߲��ܹ���������" << endl;
	}


	system("pause");
	return 0;
}