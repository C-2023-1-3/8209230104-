#include<iostream>
using namespace std;
//1��������Ȼ��m��n��
//��1�������ǵ����Լ������������������
//Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�


int max(int &n1, int &n2)//��Լ�����ñ������飬ʱ�临�Ӷ�Ϊo��2n��
{
	int n = n1 > n2 ? n2 : n1;
	for (int i = 0; i < n; i++)
	{
		int m = n - i;
		if (n1 % m == 0 && n2 % m == 0)
		{
			return m;
			break;
		}
	}
}
int min(int& n1, int& n2)//��2���ں����������Լ������С������������ʾ��ʹ�����ò�����ͬ��Ҳ�Ǳ�������
{
	if (n1==0||n2==0)//����Ϊ0ʱ�����
	{
		return 0;
	}
	int n = n1 > n2 ? n1 : n2;
	while (n % n1 != 0 || n % n2 != 0)
	{
		n++;
	}
	return n;
}
int main()
{
	cout << "��������������" << endl;
	int a,b;
	cin >> a >> b;
	cout << "���������������Լ��Ϊ�� " << max(a, b) << endl;
	if (min(a, b) == 0)
	{
		cout << "������������������С��Լ��" << endl;
	}
	else
		cout << "��������������С��Լ��Ϊ�� " << min(a, b) << endl;
}