#include<iostream>
using namespace std;
#include<cstring>
void count(const char s[1000], int counts[26])//完善counts数组，对字母进行计算
{
	for (int j = 0; j < 26; j++)
		counts[j] = 0;
	for (int i = 0; i < 1000; i++)//遍历字符串，每读入一个字母，都相应counts数组元素加1
	{
		counts[s[i] - 'a']++;
		counts[s[i] - 'A']++;//ascll码，char强制转化为int
	}
	for (int m = 0; m < 26; m++)
	{
		if (counts[m] != 0)//输出出现过的字母的次数
		{
			char t = m+97;//ascll码，int强制转化为char（a的int为97）
			cout <<t<< ":" << counts[m] << "times" << endl;
		}
	}
}

int main()
{
	char s[1000]="";
	int counts[26];
	cin.getline(s, 1000);//传入字符串
	count(s,counts);//无法将char转换为const char？
	system("pause");
	return 0;
	
}