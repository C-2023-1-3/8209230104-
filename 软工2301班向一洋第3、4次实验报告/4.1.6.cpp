#include<iostream>
using namespace std;

//6���ַ�����ÿ����ĸ���ֵĴ�����
//��ʹ�����º���ͷ��д�����������ַ�����ÿ����ĸ���ֵĴ�����
//void count(const char s[], int counts[])
//counts��һ����26��Ԫ�ص��������顣const[0]��const[1]������const[25]�ֱ��¼

void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (int i = 0; i < strlen(s); i++)
	{
		int n(0);
		char t('a'), T('A');
		while (n < 26)
		{
			if (s[i]==t||s[i]==T)
			{
				counts[n]++;
			}
			t++;
			T++;
			n++;
		 }
	}
	char a = 'a';
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0) {
			cout << a << ": " << counts[i] << "times" << endl;
		}
		a++;
	}
}
int main()
{
	char s[100];
	cin >> s;
	int counts[26];
	count(s, counts);
}