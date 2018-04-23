#pragma once
const double pi = 3.14;

class circle {
private:
	double radius;
public:
	circle() = default;
	circle(double radius)
	{
		this->radius = radius;
	}



	//accessors
	double getRadius() { return radius; }


	//operators
	double  area()
	{
		return pi*radius*radius;
	}

	double operator+(circle obj)
	{
		return this->area() + obj.area();
	}

	double operator-(circle obj)
	{
		return this->area() - obj.area();
	}

	double operator*(circle obj)
	{
		return this->area() * obj.area();
	}

	double operator/(circle obj)
	{
		return this->area() / obj.area();
	}




	circle operator+(double d)
	{
		this->radius += d;
		return *this;
	}



	//�������� �� ���������
	bool operator==(circle obj)
	{
		return this->radius == obj.radius; //�������� �� ��������� �� ��������
	}

	bool operator ==(double d)
	{
		return this->radius == d; //�������� �� ��������� ������� ������ ������� � �������� ������
	}



	//��������� ���� ���� �����������
	bool operator>(circle obj)
	{
		return this->radius * 2 * pi > obj.radius * 2 * pi;
	}

	bool operator >(double d)
	{
		return this->radius * 2 * pi > d;
	}



	circle operator+=(double d)
	{
		this->radius += d;
		return *this;
	}

	circle operator-=(double d)
	{
		this->radius -= d;
		return *this;
	}




};