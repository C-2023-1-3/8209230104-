#include<iostream>
using namespace std;
void sort(int*p,int size)
{
	int temp;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (*(p+j) > *(p+j + 1))
			{
				temp = *(p+j);
				*(p+j) = *(p+j + 1);
				*(p+j + 1) = temp;
			}

		}
	}
}
int main()
{
	int size;
	cin >> size;
	int* p = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> *(p+i);
	}//������̬����
	
	cout << p << '\t' << *p<<'\t';//�۲�ָ�뼰ָ��ָ�������
	sort(p,size);
	for (int j = 0; j < size; j++)
	{
		cout << *(p + j) << '\t';
	}
	delete p;
	system("pause");
	return 0;
}