#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "please input side1,side2 and side3:" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3) == 1)
	{
		cout << "the area is:" << double_area(side1, side2, side3) << endl;
	}//������Թ��������ξ�������
	else
	{
		cout << "the side length is not wrongful" << endl;
	}//����޷����������ξ���ʾ����
	system("pause");
	return 0;
}