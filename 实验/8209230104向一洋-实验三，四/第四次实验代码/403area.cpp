#include<iostream>
using namespace std;
int main()
{
	const int SIZE = 100;
	bool arr[SIZE];
		for (int k=0; k < SIZE; k++)//?����ο�memset����
		{
			arr[k]=false;
	    }//���������Ԫ��
	for (int n=1; n <= SIZE; n++)//n��ѧ�� ѧ��Sn
	{
		for (int m = n; m <= SIZE; m+=n )//ĳһ��ѧ�����в�����mΪ��m�������		//?����Ӧ�ò���n+1��
		{
			/*if (arr[m - 1] = false)//��˫�Ⱥ�˫�Ⱥ�
			{
				arr[m-1] = true;
		    }
			else
			{
				arr[m-1] = false;
			}*/
			arr[m-1]=arr[m-1]?false:true;//�����
		}
	}//���������һ���ı�
	for (int j = 0; j < SIZE; j++)
	{
		if (arr[j])//������ط�һ��Ҫע�⣬if����ĵȺ�һ����˫�Ⱥţ�//���Ҳ���ֵ�ǿ���ֱ���õ�
		{
			//int l = j + 1;
			cout << j+1 << "\t";
	    }
	}//������ŵĹ��ӵĺ���
	system("pause");
	return 0;
}
//��������еĺ��룿����
//��������ע��һ��
//��Ŀ������ļ��ʹ�ã�