#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "请输入三条边长" << endl;
	cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = a + b + c; 

        cout << "周长为：" << perimeter << endl;

        if (a == b || a == c || b == c) {
            cout << "这是一个等腰三角形。" << endl;
        }
        else {
            cout << "这不是一个等腰三角形。" << endl;
        }
    }
    else {
        cout << "输入的三条边长不能构成三角形。" << endl;
    }

    return 0;
}
