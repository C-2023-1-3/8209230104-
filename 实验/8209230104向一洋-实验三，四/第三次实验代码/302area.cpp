#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1)
	{
		return false;
	}//С�ڵ���1������������
	if (num > 1)
	{
		for (int i = 2; i < num; ++i)
		{
			if (num % i == 0)
			{
				return false;
			}
		}//����ܽ���forѭ���Ҳ��˳����ܱ�����������������������
		return true;
	}
}//�����ж��Ƿ�Ϊ�����ĺ���
int main()
{
	int k = 1;
	int i = 1;
		for (int num = 2;; num++)
		{
			if (k <= 200)
			{
				if (is_prime(num) == 1)//���������
				{
					if (i % 10 != 0)
					{
						cout << num <<'\t';//endl����
						k++;
						i++;
					}
					else
					{
						cout << num<<'\t' << endl;//ת���ַ��ӡ���
						k++;
						i++;
					}//if�����ж�ʵ�ֻ���
				}
			}//if�����ж�ʵ��200����
		}
		system("pause");
			return 0;
	}
		
	

