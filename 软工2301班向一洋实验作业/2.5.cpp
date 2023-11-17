#include<iostream>
using namespace std;
int main() {
    char c;
    int alpha = 0, space = 0, digit = 0, other = 0;

    cout << "请输入一行字符：" << endl;

    while (cin.get(c) && c != '\n') {
        if (isalpha(c)) {
            alpha++;
        }
        else if (isdigit(c)) {
            digit++;
        }
        else if (isspace(c)) {
            space++;
        }
        else {
            other++;
        }
    }

    cout << "大写字母个数：" << alpha << endl;
    cout << "小写字母个数：" << space << endl;
    cout << "数字个数：" << digit << endl;
    cout << "其他字符个数：" << other << endl;

    return 0;
}