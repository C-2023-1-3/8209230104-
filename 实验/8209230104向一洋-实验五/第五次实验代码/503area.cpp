#include<iostream>
using namespace std;
class Column
{
private:
	int length, width, height;
public:
	void set_value();//��ֵ����������~
	int get_area();//���������������~

};
void Column::set_value()
{
	cout << "length��width��height��";
		cin >> length >> width >> height;
}//����������ֵ~
int Column::get_area()
{
	int area = length * width * height;
	return area;
}//�������������~
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