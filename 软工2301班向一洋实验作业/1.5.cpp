#include<iostream>
using namespace std;
int main() {
	double s,h;
	cout << "请输入华氏温度： " << endl;
	cin >> h;
	s = (h - 32) * 5 / 9;
	cout << "对应的摄氏温度为： " <<s<< endl;
	

}