#include<iostream>
using namespace std;

//��д�������㣺����һ���������ж�һ�������Ƿ�Ϊ������ʹ�����º���ͷ��
//bool is_prime(int num), ���num��������������true�����򷵻�false��
//���ú���is_prime�ҳ�ǰ200������������ÿ��10�������
//2     3      5      7    11    13    17    19    23    29
bool is_prime(int num)//ֻ��������������������ʱ�临�Ӷ���o(n^2)
{
	int dev(0);
	for (int i = num; i >0; i--)
	{
		if (num % i == 0) //��¼��������
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
			if (n == 10)//ʵ�ֻ���
			{
				cout << endl;
				n = 0;
			}
		}
	}
}