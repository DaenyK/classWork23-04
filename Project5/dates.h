#pragma once
class date {
private:
	int day;
	int month;
	int year;
public:
	date() = default;
	date(int day, int month, int year)
	{
		if (year <= 2018 && year > 0)
		{
			this->year = year;

			if (month <= 12 && month > 0)
				this->month = month;

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
	}

	/*void setDay(int d) {
		if (d < 1) this->day = 1;
		else if (d > 31) this->day = 31;
		else day = d;

	}*/

	void setDate(int day, int month, int year)
	{
		this->year = year;
		this->month = month;
		this->day = day;
	}
	void setDay(int day)
	{
		if (day < 30 || day>1)
			this->day = day;
	}
	void setMonth(int month)
	{
		if (month < 12 || month>1)
			this->month = month;
	}
	void setYear(int year)
	{
		if (year < 2018 || year>1)
			this->year = year;
	}


};