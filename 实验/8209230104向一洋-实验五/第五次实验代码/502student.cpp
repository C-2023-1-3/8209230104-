//student.cpp 在此文件中进行函数的定义
#include <iostream>
using namespace std;
#include "student.h" //不要漏写此行，否则编译通不过
void Student::display() //在类外定义 display 类函数
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value()
{
	cout << "The age of the student is:";
	cin >> num;
	cout << "The name of the student is:";
	cin >> name;
	cout << "The sex of the student is:";
	cin >> sex;
}