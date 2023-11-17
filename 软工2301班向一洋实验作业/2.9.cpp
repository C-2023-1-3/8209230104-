#include<iostream>
using namespace std;
int main(){
	int d = 0;
	int t = 0;
	int s = 2;
	int n = 0;
	while (n<=100)
	{
		n = t + s;
		t = n;
		s = s * 2;
		d++;
	}
	double p ;
	if (n==100)
	{
		p = 0.8 * n / d;
		cout << d << "  " << p << endl;
	}
	else if (n>=100)
	{
		p = 0.8 * (n - s / 2) / (d - 1);
		cout << d - 1 << "  " << p << endl;
	}
	

}