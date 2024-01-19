//起泡排序
#include<iostream>
using namespace std;
void sort(int n,double p[])//n为元素的个数 p为数组名
{
	for (int j=0; j < n-1; j++)//j表示比较多少轮
	{
		for (int i = 0; i < n - j-1; i++)//i表示每一轮比较的次数
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