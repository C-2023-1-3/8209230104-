#include<iostream>
#include<vector>			//����vertor��ͷ�ļ�
#include<string>
using namespace std;
template<typename T>
vector<T>intersection(const vector<T>& v1, const vector<T>& v2)		//���庯��intersection
{
	vector<T> v3;
	for (int i = 0; i < v1.size(); i++)				//ͨ��ѭ����ȷ������
	{
		for(int j=0;j<v2.size();j++)
		{
			if (v1[i] == v2[j])
			{
				v3.push_back(v2[j]);			//���������ָ�ֵ��v3
			}
		}
	}
	return v3;									//����vector
}
int main()
{
	vector<string>str1, str2;
	cout << "�����һ��������������ַ���" << endl;
	for (int m = 0; m < 5; m++)				//��������ַ���
	{
		string m_str;
		cin >> m_str;
		str1.push_back(m_str);
	}
	cout << "����ڶ���������������ַ���" << endl;
	for (int m = 0; m < 5; m++)				//��������ַ���
	{
		string n_str;
		cin >> n_str;
		str2.push_back(n_str);
	}
	vector<string>str3(intersection(str1,str2));	//��intersection�����е�v3���ݸ�str3
	cout << "���������Ĺ�������Ϊ:";
	for (vector<string>::iterator it = str3.begin(); it != str3.end(); it++)
	{
		cout << *it << " ";

	}
	return 0;
}
