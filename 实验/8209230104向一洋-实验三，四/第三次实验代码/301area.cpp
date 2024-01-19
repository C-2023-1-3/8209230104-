#include<iostream>
using namespace std;
int gcd(int m, int n)
{
	int t;
	t = m < n ? m : n;
	for (int i=m<n?m:n;; i--)
	{
		if ((m % i == 0 && n % i == 0) == 1)
		{
			t = i;//此处不能再用变量t，否则变量定义重复
			break;
		}
	}
	return t;
}//定义取最大公约数的函数
int lcm(int m, int n)
{
	int t;
	int z;
	t = gcd(m, n);
	z = m * n / t;
	return z;
}//定义取最小公倍数的函数（两数相乘除以最小公约数）
int main()
{
	int m, n;
	cout << "please input m,n:" << endl;
	cin >> m >> n;
	cout << "m与n的最大公约数为：" << gcd(m, n) << endl;
	cout << "m与n的最小公倍数为：" << lcm(m, n) << endl;
	system("pause");
	return 0;
}//主函数