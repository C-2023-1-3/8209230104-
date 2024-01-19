#include<iostream>
using namespace std;
class Time // 定义 Time 类
{
private: // 数据成员为公用的
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
	Time tl; //定义 t1 为 Time 类对象
	tl.setTime();
	tl.getTime();
	
	return 0;
}