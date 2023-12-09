#include<iostream>
using namespace std;
//(3) 主程序中建立一动态数组（使用new），数组元素及元素个数由键盘输入，动态调试观察指针及指针指向的内容；
//设计一个函数对数组由小到大排序；主程序中用指针方式输出数组元素；最后释放数组内存（delete）。

int p(int a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			int tem(0);
			if (a[j]>a[j+1])
			{
				tem = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tem;
			}
		}
	}
	return a[n];
}
int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	a[n] = p(a, n);
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " "; // 输出当前指针指向的元素
	}
	cout << endl;

}