#include<iostream>
using namespace std;

//2����������
//�������������㷨��дһ�������������������㷨�������˶�������д���ÿ�˴����У�������Ԫ�ؽ��бȽϡ���Ϊ�����򽻻������򣬱���ԭ˳�򡣴˼�������Ϊ��������bubble sort�����³�����sinking sort������Ϊ��С��ֵ�𽥵ء�ð�ݡ����ϲ������ϴ�ֵ���³����ײ���
//�㷨���������£�
//bool changed = true;
//do
//{
//	changed = false;
//	for (int j = 0; j < listSize �C 1; j++)
//		if (list[j] > list[j + 1])
//		{
//			swap (list[j] , list[j + 1]);
//			changed = true;
//		}
//} while (changed);
//�����ԣ�ѭ���������б��Ϊ��������֤��doѭ�����ִ��listSize �C 1�Ρ�
//��д���Գ��򣬶���һ������10��˫�������ֵ����飬���ú�������ʾ���к�����֡�

void swap(int &a,int &b)//���ô��ݣ��ı�ʵ��
{	
	int c;
	c = a;
	a = b;
	b = c;
}
int main()
{
	double list[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j] , list[j + 1]);
				changed = true;
			}
	} while (changed);
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << " " ;
	}
}