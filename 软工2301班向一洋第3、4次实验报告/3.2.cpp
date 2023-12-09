#include<iostream>
using namespace std;

//编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
//bool is_prime(int num), 如果num是素数函数返回true，否则返回false；
//利用函数is_prime找出前200个素数，并按每行10个输出：
//2     3      5      7    11    13    17    19    23    29
bool is_prime(int num)//只有两个因数的是素数，时间复杂度是o(n^2)
{
	int dev(0);
	for (int i = num; i >0; i--)
	{
		if (num % i == 0) //记录因数个数
		{
			dev++;
		}
	}
	if (dev>2)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	int n(0);
	for (int i = 1; i <= 200; i++)
	{
		if (is_prime(i)) {
			cout << i << " ";
			n++;
			if (n == 10)//实现换行
			{
				cout << endl;
				n = 0;
			}
		}
	}
}