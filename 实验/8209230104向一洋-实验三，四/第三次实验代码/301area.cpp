#include<iostream>
using namespace std;
int gcd(int m, int n)
{
	int t;
	t = m < n ? m : n;
	for (int i=m<n?m:n;; i--)
	{
		if ((m % i == 0 && n % i == 0) == 1)
		{
			t = i;//�˴��������ñ���t��������������ظ�
			break;
		}
	}
	return t;
}//����ȡ���Լ���ĺ���
int lcm(int m, int n)
{
	int t;
	int z;
	t = gcd(m, n);
	z = m * n / t;
	return z;
}//����ȡ��С�������ĺ�����������˳�����С��Լ����
int main()
{
	int m, n;
	cout << "please input m,n:" << endl;
	cin >> m >> n;
	cout << "m��n�����Լ��Ϊ��" << gcd(m, n) << endl;
	cout << "m��n����С������Ϊ��" << lcm(m, n) << endl;
	system("pause");
	return 0;
}//������