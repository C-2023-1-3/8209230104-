//��������
#include<iostream>
using namespace std;
void sort(int n,double p[])//nΪԪ�صĸ��� pΪ������
{
	for (int j=0; j < n-1; j++)//j��ʾ�Ƚ϶�����
	{
		for (int i = 0; i < n - j-1; i++)//i��ʾÿһ�ֱȽϵĴ���
		{
			
			double temp = 0;
			if (p[i] > p[i + 1])
			{
				temp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = temp;
			}
		}
	}
}
int main()
{
	double a[10]={};
	cout << "please input 10 numbers:";
	for (int i=0; i < 10; i++)
	{
		cin >> a[i];
		cout << endl;
	}
	sort(10, a);
	for (int j=0; j < 10; j++)
	{
		cout << a[j];
		cout << endl;
	}
	
	system("pause");
	return 0;
}