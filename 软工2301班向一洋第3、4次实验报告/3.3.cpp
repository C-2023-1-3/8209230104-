#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;


//3�����ʵ�������¶ȵ������¶ȵ�ת����
//��дһ��ͷ�ļ���������������������
//double celsius_to_fah(double cel)    //�����¶ȵ������¶�
//double fahrenheit_to_cels(double fah) //�����¶ȵ������¶�
//ʵ��ͷ�ļ�������д���Գ��򣬵��ú�����ʾ���½����
//Celsius    Fahrenheit | Fahrenheit       Celsius
//40.0       105.0 | 120.0            48.89
//39.0       102.0 | 110.0            43.33
//����       ���� | ����             ����
//31.0        87.8 | 30.0 - 1.11
//�����Գ���Ϊ��ģ�飬��main()�������ڵ�CPP�ļ���ͷ�ļ�mytemperature.hֻ�к�����������������д����һCPP�ļ�mytemperature.cpp��
int main()
{
	cout<<fixed<< setprecision(1);
	cout << "Celsius    Fahrenheit | Fahrenheit       Celsius" << endl;
	for (double i = 0.0; i <=10.0; i++)
	{
		double n = 40.0;
		double m = 120.0;
		cout << n - i << "       " << celsius_to_fah(n - i) << " | " << m - i * 10 << "            " << fahrenheit_to_cels(m - i * 10) << endl;
	}
}