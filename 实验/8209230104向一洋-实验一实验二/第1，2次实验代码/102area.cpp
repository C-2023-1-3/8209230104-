#include<iostream>
#define ¦° 3.14
using namespace std;
int main()
{
	int r = 0;
	int h = 0;
	cout << "ÇëÄãÊäÈëÔ²×¶µ×µÄ°ë¾¶" << endl;
	cin >> r;
	cout << "ÇëÄãÊäÈëÔ²×¶µÄ×¶¸ß" << endl;
	cin >> h;
	float v;
	v = 1.0 / 3 * h * r * r * ¦°;
	cout << "Ô²×¶µÄÌå»ýÎª" << v << endl;
	system("pause");
	return 0;
}