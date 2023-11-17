#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "请输入一个字符" << endl;
	cin >> a;
    if (a>= 'a' && a <= 'z') {
        a = a - 32;
        cout << "字符改成大写为: " << a << endl;
    }
    else {
        cout << "a后继字符的ASCII码值为: " << int(a) + 1 << endl;
    }

}