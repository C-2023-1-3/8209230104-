#include<iostream>
using namespace std;
int main() //C 语言程序，要了解
{
	int a[] = { 1,2,3 };
	int*p, i;
	p = a; //将数组 a 首地址送给 p
	for (i = 0; i < 3; i++)
		printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i)); //与 cout 功能差不多
}
//arr->十六进制的数组首地址（第一个数据元素的地址）
//（int）arr->十进制的数组首地址