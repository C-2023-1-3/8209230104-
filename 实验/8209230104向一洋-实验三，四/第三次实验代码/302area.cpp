#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1)
	{
		return false;
	}//小于等于1的数不是素数
	if (num > 1)
	{
		for (int i = 2; i < num; ++i)
		{
			if (num % i == 0)
			{
				return false;
			}
		}//如果能进入for循环且不退出，能被其他数字整除，则不是素数
		return true;
	}
}//定义判断是否为素数的函数
int main()
{
	int k = 1;
	int i = 1;
		for (int num = 2;; num++)
		{
			if (k <= 200)
			{
				if (is_prime(num) == 1)//如果是素数
				{
					if (i % 10 != 0)
					{
						cout << num <<'\t';//endl换行
						k++;
						i++;
					}
					else
					{
						cout << num<<'\t' << endl;//转义字符加“”
						k++;
						i++;
					}//if条件判断实现换行
				}
			}//if条件判断实现200素数
		}
		system("pause");
			return 0;
	}
		
	

