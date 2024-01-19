#include<iostream>
using namespace std;
class Column
{
private:
	int length, width, height;
public:
	void set_value();//赋值函数的声明~
	int get_area();//求面积函数的声明~

};
void Column::set_value()
{
	cout << "length、width、height：";
		cin >> length >> width >> height;
}//给长方柱赋值~
int Column::get_area()
{
	int area = length * width * height;
	return area;
}//定义求面积函数~
int main()
{
	Column c1;
	c1.set_value();
	cout << c1.get_area() << endl;
	Column c2;
	c2.set_value();
	cout << c2.get_area() << endl;
	Column c3;
	c3.set_value();
	cout << c3.get_area() << endl;

	system("pause");
	return 0;

}