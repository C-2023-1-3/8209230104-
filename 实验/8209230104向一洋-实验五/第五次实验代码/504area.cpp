#include<iostream>
#include <cmath>//求根号要包括
using namespace std;

//创建Shape基类
class Shape
{
public:
	//定义求面积的纯虚函数
	virtual double area() = 0;
};



//创建子类Circle圆形
class Circle :public Shape
{
public:
	//圆形求面积：Π*r*r
	virtual double area()
	{
		return NP * r * r;
	}
	Circle(double R)
	{
		r = R;
		cout<< "圆形的面积为：" <<area() << endl;
	}

private:
	double r;
	const double NP = 3.14;
};



//创建子类Square正方形
class Square :public Shape
{
public:
	//正方形求面积：l*l
	virtual double area()
	{
		return l * l;
	}
	Square(double L)
	{
		l = L;
		cout << "正方形的面积为：" << area() << endl;
	}
	
private:
	double l;//正方形的边长
};



//创建子类长方形Rectangle
class Rectangle :public Shape
{
public:
	//长方形面积：a*b
	virtual double area()
	{
		return a * b;
	}
	Rectangle(double A, double B)
	{
		a = A;
		b = B;
		cout << "长方形的面积为：" << area() << endl;
	}

private:
	double a; //长
		double b;//宽
};



//创建子类梯形Trapezoid
class Trapezoid :public Shape
{
public:
	//梯形面积：(up+down)*h/2
	virtual double area()
	{
		return (up + down) * h / 2;
	}
	Trapezoid(double UP, double Down, double H)
	{
		up = UP;
		down = Down;
		h = H;
		cout << "梯形的面积为：" << area() << endl;
	}

private:
	double up;//上底
	double down;//下底
	double h;//高
};




//创建子类三角形Triangle
class Triangle :public Shape
{
public:
	//求三角形面积：海伦公式
	virtual double area()
	{
		double p = (a1 + b1 + c1) / 2;
		double S=0.0;//面积
		S =sqrt( p * (p - a1) * (p - b1) * (p - c1));//求根号用sqrt（）
		return S;
	}
	Triangle(double A1, double B1, double C1)
	{
		a1 = A1;
		b1 = B1;
		c1 = C1;
		cout << "三角形的面积为：" << area() << endl;
	}

private:
	double a1, b1, c1;//三角形三边
};


int main()
{//创建子类对象
	Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);
	//基类指针数组每一个元素指向一个派生类的对象
	Shape* shape[5] = { &circle, &square, &rectangle, &trapezoid, &triangle };
	//接下来求和
	double sum = 0.0;
	for (int i = 0; i < 5; i++)
	{
		sum += shape[i]->area();
	}
	cout << "面积和为：" << sum << endl;



	system("pause");
	return 0;
}