#include<iostream>
#include <cstring>
#include <cmath>
using namespace std;

//
//(2)��дһ�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10�������������������в��ԡ�
//����ԭ�� int parseHex(const char* const hexString);
//�磺���ú��� parseHex(��A5��); ����165

int parseHex(const char* const hexString);

int main() {
    char hexString[100];
    cout << "Enter a hexadecimal number: ";
    cin >> hexString;
    int decimal = parseHex(hexString);
    cout << "The decimal equivalent of " << hexString << " is " << decimal << "." << endl;
    return 0;
}

int parseHex(const char* const hexString) {
    int length = strlen(hexString);
    int decimal = 0;
    for (int i = 0; i < length; i++) {
        char c = hexString[i];
        if (c >= '0' && c <= '9') {
            decimal += (c - '0') * pow(16, length - i - 1);
        }
        else if (c >= 'a' && c <= 'f') {
            decimal += (c - 'a' + 10) * pow(16, length - i - 1);
        }
        else if (c >= 'A' && c <= 'F') {
            decimal += (c - 'A' + 10) * pow(16, length - i - 1);
        }
    }
    return decimal;
}