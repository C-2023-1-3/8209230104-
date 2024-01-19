#include<iostream>
#include<cstring>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	int i = 0;
	int flag = 0;
	for (int j = 0; j < size2;)
	{
		if (s1[i] == s2[j])
		{
			i++;
			flag++;
			if (s1[i] == 0)
				return j - size1 + 1;
		}
		else if (flag)
		{
			i = 0;
			continue;
		}
		else i = 0;
		j++;
		flag = 0;
	}
	return -1;
}
int main()
{
	
	char s1[1000];
	char s2[1000];
	cout << "string1:";
	cin.getline(s1, 1000);
	cout << "string2:";
	cin.getline(s2, 1000);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is" << indexof(s1, s2) << endl;
	system("pause");
	return 0;
}