#include<iostream>
using namespace std;
//(3) �������н���һ��̬���飨ʹ��new��������Ԫ�ؼ�Ԫ�ظ����ɼ������룬��̬���Թ۲�ָ�뼰ָ��ָ������ݣ�
//���һ��������������С������������������ָ�뷽ʽ�������Ԫ�أ�����ͷ������ڴ棨delete����

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
		cout << *(a + i) << " "; // �����ǰָ��ָ���Ԫ��
	}
	cout << endl;

}