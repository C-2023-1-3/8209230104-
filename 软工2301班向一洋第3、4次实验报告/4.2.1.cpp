#include<iostream>
using namespace std;

//(1)��д��������ַ���s1�Ƿ�Ϊ�ַ���s2���Ӵ������ǣ����ص�һ��ƥ����±꣬���򷵻� - 1��
// ���������������ַ���s1��s2�����ú���ʵ�֡�
//����ԭ�ͣ�int indexof(const char* s1, const char* s2);

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
