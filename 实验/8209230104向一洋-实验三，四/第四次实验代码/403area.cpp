#include<iostream>
using namespace std;
int main()
{
	const int SIZE = 100;
	bool arr[SIZE];
		for (int k=0; k < SIZE; k++)//?建议参考memset函数
		{
			arr[k]=false;
	    }//输入数组的元素
	for (int n=1; n <= SIZE; n++)//n个学生 学生Sn
	{
		for (int m = n; m <= SIZE; m+=n )//某一个学生进行操作，m为第m个存物柜		//?这里应该不用n+1吧
		{
			/*if (arr[m - 1] = false)//？双等号双等号
			{
				arr[m-1] = true;
		    }
			else
			{
				arr[m-1] = false;
			}*/
			arr[m-1]=arr[m-1]?false:true;//清楚！
		}
	}//对数组进行一个改变
	for (int j = 0; j < SIZE; j++)
	{
		if (arr[j])//？这个地方一定要注意，if里面的等号一定是双等号！//并且布尔值是可以直接用的
		{
			//int l = j + 1;
			cout << j+1 << "\t";
	    }
	}//输出开着的柜子的号码
	system("pause");
	return 0;
}
//输出了所有的号码？？？
//代码缩进注意一下
//三目运算符的简便使用！