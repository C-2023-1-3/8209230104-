#include<iostream>
#include <cmath>//�����Ҫ����
using namespace std;

//����Shape����
class Shape
{
public:
	//����������Ĵ��麯��
	virtual double area() = 0;
};



//��������CircleԲ��
class Circle :public Shape
{
public:
	//Բ�����������*r*r
	virtual double area()
	{
		return NP * r * r;
	}
	Circle(double R)
	{
		r = R;
		cout<< "Բ�ε����Ϊ��" <<area() << endl;
	}

private:
	double r;
	const double NP = 3.14;
};



//��������Square������
class Square :public Shape
{
public:
	//�������������l*l
	virtual double area()
	{
		return l * l;
	}
	Square(double L)
	{
		l = L;
		cout << "�����ε����Ϊ��" << area() << endl;
	}
	
private:
	double l;//�����εı߳�
};



//�������೤����Rectangle
class Rectangle :public Shape
{
public:
	//�����������a*b
	virtual double area()
	{
		return a * b;
	}
	Rectangle(double A, double B)
	{
		a = A;
		b = B;
		cout << "�����ε����Ϊ��" << area() << endl;
	}

private:
	double a; //��
		double b;//��
};



//������������Trapezoid
class Trapezoid :public Shape
{
public:
	//���������(up+down)*h/2
	virtual double area()
	{
		return (up + down) * h / 2;
	}
	Trapezoid(double UP, double Down, double H)
	{
		up = UP;
		down = Down;
		h = H;
		cout << "���ε����Ϊ��" << area() << endl;
	}

private:
	double up;//�ϵ�
	double down;//�µ�
	double h;//��
};




//��������������Triangle
class Triangle :public Shape
{
public:
	//����������������׹�ʽ
	virtual double area()
	{
		double p = (a1 + b1 + c1) / 2;
		double S=0.0;//���
		S =sqrt( p * (p - a1) * (p - b1) * (p - c1));//�������sqrt����
		return S;
	}
	Triangle(double A1, double B1, double C1)
	{
		a1 = A1;
		b1 = B1;
		c1 = C1;
		cout << "�����ε����Ϊ��" << area() << endl;
	}

private:
	double a1, b1, c1;//����������
};


int main()
{//�����������
	Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);
	//����ָ������ÿһ��Ԫ��ָ��һ��������Ķ���
	Shape* shape[5] = { &circle, &square, &rectangle, &trapezoid, &triangle };
	//���������
	double sum = 0.0;
	for (int i = 0; i < 5; i++)
	{
		sum += shape[i]->area();
	}
	cout << "�����Ϊ��" << sum << endl;



	system("pause");
	return 0;
}