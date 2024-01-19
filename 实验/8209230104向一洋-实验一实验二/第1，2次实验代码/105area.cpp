#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, b;
	cout << "please input a Fahrenheit tempereture:";
	cin >> a;
	b = (a - 32) / 1.8;
	cout << "the Celsius tempereture is:" << setprecision(2) << b;
	return 0;
}