#include<iostream>
using namespace std;

//4���ϲ��������кõ����飺
//��д���º������ϲ��������кõ����飬�γ�һ���µ����кõ����顣
//void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
//ʹ��size1 + size2�αȽ�ʵ�ֺ�������д���Գ�����ʾ�û������������кõ����飬����ʾ�ϲ��Ժ�����顣
// ������һ������������ע�⣬�������ݵĵ�һ�������������Ԫ�����������������һ���֡��ٶ������С������80��
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)//�ϲ�����1
	{
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++)//�ϲ�����2
	{
		list3[size1 + i] = list2[i];
	}
	for (int i = 0; i < size1+size2-1; i++)//ð������
	{
		for (int j = 0; j < size1 + size2 - i - 1; j++) 
		{
			if (list3[j]>list3[j+1])
			{
				int tem = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = tem;
			}
		}
	}
	cout << "The merged list is: ";
	for (int i = 0; i < size1+size2; i++)
	{
		cout<< list3[i] << " ";
	}
}
int main()
{	
	int size1(0);
	int *list1 = new int[size1];
	int size2(0);
	int* list2 = new int[size2];
	cout << "�������һ�����֣���һ������Ԫ�ص�������" << endl;
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "������ڶ������֣���һ������Ԫ�ص�������" << endl;
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	int *list3=new int [size1 + size2];
	merge(list1, size1, list2, size2,list3);
}