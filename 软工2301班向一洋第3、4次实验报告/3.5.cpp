#include<iostream>
using namespace std;

//5、猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。
//第二天又将剩下的桃子吃掉一半，又多吃一个，
//以后每天如此，到第10天，发现只剩最后一个桃子，
//问，第一天猴子共摘多少桃子（用递归实现）。
void eat()//没技术含量啊（^0^)
{
	int n(1);
	for (int i = 0; i < 9; i++)
	{
		n = (n + 1) * 2;
	}
	cout << n << endl;
}
int main()
{
	cout << "第一天一共摘了：";
	eat();
}