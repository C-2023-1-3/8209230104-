#include<iostream>
#include<cstring>//�õ������ַ�������Ҫ��
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	int size1, size2, i = 0, flag = 0;
	size1 = strlen(s1);//strlen���������ַ���������ַ������ȵġ����Ὣ/0֮���Ԫ�ؼ������
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
		else if (flag)//�������������ǰһ��s1��s2ͬ����������һ��Ԫ�ز�ͬ����ʱ��jֵ���䣬i=0������we��wwwe�޷���ȷ�����
		{
			i = 0;
			continue;//continue����ֹ����ѭ����ֱ�ӽ����´�ѭ��
		}
		
		else i = 0;
		j++;//�������ÿһ��ֻҪflag��Ϊ1������j++
		flag = 0;
	}
	return -1;

}

int main()
{
	char s1[1000], s2[1000];
	cout << "Enter the first string:";
	cin.getline(s1, 1000);//cin.getline(�ַ��������������鳤��)�������ַ�������
	cout << "Enter the second string:";
	cin.getline(s2, 1000);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is" << indexOf(s1, s2) << endl;
	return 0;

}
