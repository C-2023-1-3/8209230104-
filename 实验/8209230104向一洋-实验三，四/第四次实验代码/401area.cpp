#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    const int SIZE = 10;//�涨������Ԫ�ظ���
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << i+1 << ":";
        cin >> arr[i];
        cout << endl;
    }//����������ʮ��Ԫ�ز��ŵ�������
    cout << arr[0];//��һ��Ԫ��һ���ᱻ���
    //��������˼·�ǣ�����forѭ��Ƕ�ף���ĳ��Ԫ��ǰ���Ԫ�����Ԫ�رȽϣ������������������Ԫ�أ�����������Ԫ��
    for (int i = 1; i < SIZE; i++)
    {
        for (int m = i - 1; m>=0; m--)
        {
            if (arr[m] == arr[i])
            {
                break;
            }//��ͬ�Ͳ�������ڼ���������
            else 
            {
                if (m == 0)
                {
                    cout << arr[i];
                }
            }//��ͬ��������ڼ���������
        }//��arr[i]��ǰ�������Ƿ���arr[i]��ͬ
    }
    system("pause");
    return 0;
}






















