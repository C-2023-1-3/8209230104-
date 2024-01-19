#include<iostream>
using namespace std;
void merge(int list1[], int size1,int list2[], int size2,int list3[])//将1、2融合入3
{//sizen 是数组元素个数
	for (int i = 0; i < size1; i++)//i是指数组元素的角标
	{
		list3[i] = list1[i];
	}
	for (int j = 0; j < size2; j++)
	{
		list3[size1 + j] = list2[j];
	}
}//将数组1、2的元素融入到数组3
void arrange(int list3[], int size3)
{
	int temp;
	for (int j = 0; j < size3 - 1; j++)
	{
		for (int i = 0; i < size3 - 1; i++)
		{
			if (list3[i] > list3[i + 1])
			{
				temp = list3[i];
				list3[i] = list3[i + 1];
				list3[i + 1] = temp;
			}
		}
	}//从大到小排序
}
//int main()
//{
//	int size1, size2, size3;
//	
//	cout << "enter size1:";
//	cin >> size1;
//	cout << "enter size2:";
//	cin >> size2;
//	size3 = size1 + size2;
//	const int n = size1;
//	const int k = size2;
//	const int p = size3;
//	int list1[n], list2[k], list3[p];//开始报错：数组定义时，变量不能做下标
//	
//	cout << "Enter list1:";
//	cin >> size1;
//	for (int i = 0; i < n; i++)//输入list1数组
//	{
//		cin >> list1[i] >> "\t";
//	}
//	cout << "Enter list2:";
//	cin >> size2;
//	for (int j = 0; j < k; j++)//输入list2数组
//	{
//		cin >> list2[j] >> "\t";
//	}
//	merge(list1, n, list2, k, list3);
//	arrange(list3, p);
//	cout << "The merged list is" << "\t";
//	for (int m = 0; m < p; m++)
//	{
//		cout << list3[m];
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int size1, size2, size3;

	cout << "enter size1:";
	cin >> size1;
	cout << "enter size2:";
	cin >> size2;
	size3 = size1 + size2;
	int* list1 = new int[size1];
	int* list2 = new int[size2];
	int* list3 = new int[size3];
	cout << "Enter list1:";
	for (int i = 0; i < size1; i++)//输入list1数组
	{
		cin >> list1[i];
	}
	cout << "Enter list2:";
	for (int j = 0; j < size2; j++)//输入list2数组
	{
		cin >> list2[j];
	}
	merge(list1, size1, list2, size2, list3);
	arrange(list3, size3);
	cout << "The merged list is" << "\t";
	for (int m = 0; m < size3; m++)
	{
		cout << list3[m];
	}
	delete[]list1;
	delete[]list2;
	delete[]list3;
	system("pause");
	return 0;
}