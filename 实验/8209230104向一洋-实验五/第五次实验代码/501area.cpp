#include<iostream>
using namespace std;
class Time // ���� Time ��
{
private: // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void setTime()
	{
		int x, y, z;
		cin >> x >> y >> z;
		hour = x;
		minute = y;
		sec = z;
	}
	int getTime()
	{
		cout << hour << ":" << minute << ":" << sec;
		return 0;
	}
	
};
int main()
{
	Time tl; //���� t1 Ϊ Time �����
	tl.setTime();
	tl.getTime();
	
	return 0;
}