#include<iostream>
using namespace std;
int* f()//int*f()��ʾ��������Ĺ����ǣ�����һ����ַ������һ��ָ��int���͵�ָ�롣
{
	int*list = new int[4];//������������ʽת��Ϊָ������ʵ���ָ�룬������һ��ָ�볣����ָ��������׸�Ԫ�ء�
	for (int i = 0, j = 0; i < 4; i++, j++)
	{
		list[i] = j;
	}
	return list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete p;
}