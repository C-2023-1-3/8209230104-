#include<iostream>
#include<cstring>
#include<string>
using namespace std;
//stoi�������ã���n�����ַ���ת��Ϊʮ������

int parseHex(const char* const hexString);

int main()
{
	
	int size;
	cout << "the size of your string is:";
	cin >> size;
	char*hexString=new char[size];
	cout << "please input your string:";
	for (int i = 0; i < size; i++)
	{
		cin >> hexString[i];
	}
    cout<<parseHex(hexString);

	delete[]hexString;//�ͷ�����

	system("pause");
	return 0;
}

int parseHex(const char* const hexString)
{
	string name1;
	int size = strlen(hexString);

	for (int i = 0; i < size; i++)
	{
		name1 = name1 + hexString[i];
	}//���ַ�����ת��Ϊ�ַ���

	cout << std::stoi(name1, 0, 16);
	return 0;
}