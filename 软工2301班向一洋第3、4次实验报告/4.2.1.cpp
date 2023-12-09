#include<iostream>
using namespace std;

//(1)编写函数检查字符串s1是否为字符串s2的子串，若是，返回第一次匹配的下标，否则返回 - 1。
// 在主程序中输入字符串s1与s2，调用函数实现。
//函数原型：int indexof(const char* s1, const char* s2);

int indexof(const char* s1, const char* s2)
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    for (int i = 0; i < n2 - n1 + 1; i++) {
        if (s2[i] == s1[0])
        {
            int d(0);
            for (int j = 0; j < n1; j++)
            {
                if (s2[i + j] == s1[j])
                {
                    d++;
                }
            }
            if (d == n1)
            {
                return i ;
                break;
            }
        }

    }
    return -1;
}
int main()
{
    char s1[100], s2[100];
    cout << "Enter s1: ";
    cin.getline(s1, 100);
    cout << "Enter s2: ";
    cin.getline(s2, 100);
    int index = indexof(s1, s2);
    if (index == -1) {
        cout << "s1 is not a substring of s2." << endl;
    }
    else {
        cout << "s1 is a substring of s2 at index " << index << "." << endl;
    }
    return 0;
}
