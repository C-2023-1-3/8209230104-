#include<iostream>
using namespace std;
int* f()//int*f()表示这个函数的功能是：返回一个地址。返回一个指向int类型的指针。
{
	int*list = new int[4];//数组名可以隐式转换为指向数组实体的指针，而且是一个指针常量，指向数组的首个元素。
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