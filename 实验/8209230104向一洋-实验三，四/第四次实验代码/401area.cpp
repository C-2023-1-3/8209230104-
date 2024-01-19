#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    const int SIZE = 10;//规定数组中元素个数
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << i+1 << ":";
        cin >> arr[i];
        cout << endl;
    }//输入数组中十个元素并放到数组中
    cout << arr[0];//第一个元素一定会被输出
    //接下来的思路是：两个for循环嵌套，拿某个元素前面的元素与此元素比较，若都不相等则输出这个元素，否则不输出这个元素
    for (int i = 1; i < SIZE; i++)
    {
        for (int m = i - 1; m>=0; m--)
        {
            if (arr[m] == arr[i])
            {
                break;
            }//相同就不输出正在检索的数字
            else 
            {
                if (m == 0)
                {
                    cout << arr[i];
                }
            }//不同就输出正在检索的数字
        }//看arr[i]以前的数字是否与arr[i]相同
    }
    system("pause");
    return 0;
}






















