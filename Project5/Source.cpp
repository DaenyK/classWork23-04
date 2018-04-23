#include <iostream>
#include "shape.h"
#include "dates.h"

using  namespace std;
int main()
{
	int z;
	cin >> z;
	switch (z)
	{
	case 1:
	{
		int a = 5;
		int b = 10;
		std::cout << a + b << std::endl;

		circle c1(10), c2(5);
		std::cout << c1 + c2/*c1.operator+(c2)*/ << std::endl; // сложение
		std::cout << c1 - c2 << std::endl;                     // вычитание
		std::cout << c1 * c2 << std::endl;					   // умножение
		std::cout << c1 / c2 << std::endl;                     // деление

		c2 = c1 + 7.0;                    //одно
		//c2 = c1.operator+(7.0);        // и тоже

		//std:: cout<<(c1+7.0).getRadius << std::endl;

		std::cout << c2.getRadius() << std::endl;



		std::cout << (c1 == c2) << std::endl;  //проверка на равенство по радиусам
		std::cout << (c1 == 17) << std::endl;  //проверка на равенство радиуса одного объекта с заданным числом


		 //сравнение длин двух окружностей
		std::cout << (c1 > c2) << std::endl;
		std::cout << (c1 > 22) << std::endl;


	}break;

	case 2:
	{
		date D1(29, 2, 2018);
		int year, month, day;

		if (year <= 2018 && year > 0)
		{

			if (month <= 12 && month > 0)

			if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
			{
				if (this->month == 2)
				{
					if (day <= 29 && day > 0)
						this->day = day;
				}
			}
			else
			{
				if (this->month == 2)
				{
					if (day <= 28 && day > 0)
						this->day = day;
				}
			}

			if (this->month == 1 || this->month == 3 || this->month == 5 ||
				this->month == 7 || this->month == 8 || this->month == 10 ||
				this->month == 12)
			{
				if (day <= 31 && day > 0)
					this->day = day;
			}
			else
			{
				if (day <= 30 && day > 0)
					this->day = day;
			}
		}
	}break;

	}



	system("pause");
	return 0;
}