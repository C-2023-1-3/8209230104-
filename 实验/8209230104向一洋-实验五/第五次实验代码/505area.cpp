#include<iostream>
#include<vector>			//引用vertor的头文件
#include<string>
using namespace std;
template<typename T>
vector<T>intersection(const vector<T>& v1, const vector<T>& v2)		//定义函数intersection
{
	vector<T> v3;
	for (int i = 0; i < v1.size(); i++)				//通过循环来确定交集
	{
		for(int j=0;j<v2.size();j++)
		{
			if (v1[i] == v2[j])
			{
				v3.push_back(v2[j]);			//将交集部分赋值给v3
			}
		}
	}
	return v3;									//返回vector
}
int main()
{
	vector<string>str1, str2;
	cout << "请给第一个向量输入五个字符串" << endl;
	for (int m = 0; m < 5; m++)				//输入五个字符串
	{
		string m_str;
		cin >> m_str;
		str1.push_back(m_str);
	}
	cout << "请给第二个向量输入五个字符串" << endl;
	for (int m = 0; m < 5; m++)				//输入五个字符串
	{
		string n_str;
		cin >> n_str;
		str2.push_back(n_str);
	}
	vector<string>str3(intersection(str1,str2));	//将intersection函数中的v3传递给str3
	cout << "两个向量的公共部分为:";
	for (vector<string>::iterator it = str3.begin(); it != str3.end(); it++)
	{
		cout << *it << " ";

	}
	return 0;
}
