#include<iostream>
using namespace std;

//6、字符串中每个字母出现的次数：
//请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
//void count(const char s[], int counts[])
//counts是一个有26个元素的整数数组。const[0]，const[1]，…，const[25]分别记录

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