#include<iostream>
using namespace std;
int main()
{
	char a[1001];
	cin >> a;
	int changdu;
	changdu = strlen(a);
	int i = 0;
	if (a[i] >= 'a' && a[i] <= 'z')
	{
		a[i] = a[i] - 32;
		cout << a << endl;
	}
	else {
		cout << (int)a << endl;
	}

	return 0;

}