#include<iostream>
#include<cstring>
using namespace std;

//5、检验子串：
//编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。
//int indexOf(const char s1[], const char s2[])
//编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串。下面是程序的运行样例：
int indexOf(const char s1[], const char s2[]) {
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    for (int i = 0; i <n2-n1+1; i++) {
        if (s2[i]==s1[0])
        {
            int d(0);
            for (int j = 0; j < n1; j++)
            {
                if (s2[i+j]==s1[j])
                {
                    d++;
                }
            }
            if (d==n1)
            {
                return i+1 ;
                break;
            }
        }
        
    }
    return -1;
}
int main() {
    char s1[100], s2[100];
    cout << "Enter s1: ";
    cin.getline(s1, 100);
    cout << "Enter s2: ";
    cin.getline(s2,100);
    int index = indexOf(s1, s2);
    if (index == -1) {
        cout << "s1 is not a substring of s2." << endl;
    }
    else {
        cout << "s1 is a substring of s2 at index " << index << "." << endl;
    }
    return 0;
}
