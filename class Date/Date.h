#pragma once
#include<iostream>
#include<string>
using namespace std;
class Date {
	unsigned short day : 5;
	unsigned short month : 4;
	short year;

public:
	operator string()
	{
		return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
	}
	Date& operator ++ ()
	{
		if(month <= 12)
		{

			bool ok = false;
			if (month == 2 && day == 29)
			{
				ok = true;
				this->day = 1;
				month++;
			}
			if (month % 2 == 0 && this->day == 30 && month <= 7 && !ok)
			{
				this->day = 1;
				month++;
			}
			else if (month % 2 != 0 && this->day == 31 && month <= 7 && !ok)
			{
				this->day = 1;
				month++;
			}
			if (month % 2 == 0 && this->day == 31 && month > 7 && !ok)
			{
				this->day = 1;
				month++;
			}
			else if (month % 2 != 0 && this->day == 30 && month > 7 && !ok)
			{
				this->day = 1;
				month++;
			}
			else
				day++;
		}
		return *this;
	}
	Date operator ++ (int)
	{
		if (month <= 12)
		{

			bool ok = false;
			if (month == 2 && day == 29)
			{
				ok = true;
				this->day = 1;
				month++;
			}
			if (month % 2 == 0 && this->day == 30 && month <= 7 && !ok)
			{
				this->day = 1;
				month++;
			}
			else if (month % 2 != 0 && this->day == 31 && month <= 7 && !ok)
			{
				this->day = 1;
				month++;
			}
			if (month % 2 == 0 && this->day == 31 && month > 7 && !ok)
			{
				this->day = 1;
				month++;
			}
			else if (month % 2 != 0 && this->day == 30 && month > 7 && !ok)
			{
				this->day = 1;
				month++;
			}
			else
				day++;
		}
		Date copy = *this;
		return copy;
	}
	Date& operator -- ()
	{
		month--;
		bool ok = false;
		if (month % 2 == 0 && this->day == 1 && month <= 7)
		{
			ok = true;
			this->day = 30;

		}
		else if (month % 2 != 0 && this->day == 1 && month <= 7)
		{
			ok = true;
			this->day = 31;

		}
		if (month % 2 == 0 && this->day == 1 && month > 7)
		{
			ok = true;
			this->day = 31;

		}
		else if (month % 2 != 0 && this->day == 1 && month > 7)
		{
			ok = true;
			this->day = 30;

		}
		if (!ok)
			day--;
		return *this;
	}
	Date operator -- (int)
	{
		month--;
		bool ok = false;
		if (month % 2 == 0 && this->day == 1 && month <= 7)
		{
			ok = true;
			this->day = 30;
			
		}
		else if (month % 2 != 0 && this->day == 1 && month <= 7)
		{
			ok = true;
			this->day = 31;
			
		}
		if (month % 2 == 0 && this->day == 1 && month > 7)
		{
			ok = true;
			this->day = 31;
			
		}
		else if (month % 2 != 0 && this->day == 1 && month > 7)
		{
			ok = true;
			this->day = 30;
			
		}
		if(!ok)
			day--;
		Date copy = *this;
		return copy;
	}
	void SetDates(unsigned short day, unsigned short month, short year);
	void SetDay(unsigned short day);
	void SetMonth(unsigned short month);
	void SetYear(short year);
	unsigned short GetDay() const;
	unsigned short GetMonth() const;
	short GetYear() const;
	void Print();
};

