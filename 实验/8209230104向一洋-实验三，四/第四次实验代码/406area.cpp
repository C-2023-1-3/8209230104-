#include<iostream>
using namespace std;
#include<cstring>
void count(const char s[1000], int counts[26])//����counts���飬����ĸ���м���
{
	for (int j = 0; j < 26; j++)
		counts[j] = 0;
	for (int i = 0; i < 1000; i++)//�����ַ�����ÿ����һ����ĸ������Ӧcounts����Ԫ�ؼ�1
	{
		counts[s[i] - 'a']++;
		counts[s[i] - 'A']++;//ascll�룬charǿ��ת��Ϊint
	}
	for (int m = 0; m < 26; m++)
	{
		if (counts[m] != 0)//������ֹ�����ĸ�Ĵ���
		{
			char t = m+97;//ascll�룬intǿ��ת��Ϊchar��a��intΪ97��
			cout <<t<< ":" << counts[m] << "times" << endl;
		}
	}
}

int main()
{
	char s[1000]="";
	int counts[26];
	cin.getline(s, 1000);//�����ַ���
	count(s,counts);//�޷���charת��Ϊconst char��
	system("pause");
	return 0;
	
}