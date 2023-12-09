#include<iostream>
using namespace std;
//1、输入自然数m和n，
//（1）求他们的最大公约数（或称最大公因数）。
//要求输入、输出在主函数中进行，求公约数由函数实现。


int max(int &n1, int &n2)//求公约数采用暴力历遍，时间复杂度为o（2n）
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
int min(int& n1, int& n2)//（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）同理也是暴力历遍
{
	if (n1==0||n2==0)//考虑为0时的情况
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
	cout << "请输入两个整数" << endl;
	int a,b;
	cin >> a >> b;
	cout << "这两个整数的最大公约数为： " << max(a, b) << endl;
	if (min(a, b) == 0)
	{
		cout << "这两个整数不存在最小公约数" << endl;
	}
	else
		cout << "这两个整数的最小公约数为： " << min(a, b) << endl;
}