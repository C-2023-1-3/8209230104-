#include<iostream>
using namespace std;
//1、打印不同的数：
//编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
//提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。

void compare(string s)//实际上用动态数组生成整形数组进行比较也行，但这里直接用字符串数组进行，感觉更方便
{
	string c;
	int tem(0);//这是一个标记，记录重复次数
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (s[j] == s[i])//重复的话标记++
			{
				tem++;
			}
		}
		if (tem==0)//标记为零代表不重复
		{
			c += s[i];
		}
		tem = 0;
	}
	cout << c << endl;
}
int main()
{
	cout << "请输入有段数字 " << endl;
	string s;
	cin >> s;
	compare(s);
}