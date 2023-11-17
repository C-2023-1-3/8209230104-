#include<iostream>
#define pi 3.14
using namespace std;
int main() 
{
	double r ,h;
	cout << "please write the high" << endl;
	cin >> h;
	cout << "please write the radius" << endl;
	cin >> r;
	double v = pi * r * r * h / 3;
	cout << "the volume of the cone is:  " << v << endl;
	return 0;
 }