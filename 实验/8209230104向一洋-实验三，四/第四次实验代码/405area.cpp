#include<iostream>
#include<cstring>//用到定义字符型数组要加
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	int size1, size2, i = 0, flag = 0;
	size1 = strlen(s1);//strlen（）是求字符型数组和字符串长度的。不会将/0之后的元素加入计算
	size2 = strlen(s2);
	for (int j = 0; j < size2; )
	{
		if (s1[i] == s2[j])
		{
			flag++;
			i++;
			if (s1[i] == 0)
				return j - size1 + 1;
		
		}
		else if (flag)//进入这个条件是前一组s1与s2同，但是再下一个元素不同，此时让j值不变，i=0，避免we与wwwe无法正确输出。
		{
			i = 0;
			continue;//continue是终止本次循环，直接进行下次循环
		}
		
		else i = 0;
		j++;//无论如何每一遍只要flag不为1，都会j++
		flag = 0;
	}
	return -1;

}

int main()
{
	char s1[1000], s2[1000];
	cout << "Enter the first string:";
	cin.getline(s1, 1000);//cin.getline(字符型数组名，数组长度)来输入字符型数组
	cout << "Enter the second string:";
	cin.getline(s2, 1000);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is" << indexOf(s1, s2) << endl;
	return 0;

}
