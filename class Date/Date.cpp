#include "Date.h"
#include<iostream>
using namespace std;
void Date::SetDates(unsigned short day, unsigned short month, short year)
{
	SetMonth(month);
	SetYear(year);
	SetDay(day);
}

void Date::SetDay(unsigned short day)
{
	if (month % 2 == 0 && month != 2)
	{
		if (day > 30 || day == 0)
			throw "Error";
	}
	else if (month % 2 != 0 && month != 2)
	{
		if (day > 31 || day == 0)
			throw "Error";

	}
	else
	{
		if (day > 28 || day == 0)
			throw "Error";

	}
	if (month > 12 || month == 0)
		throw "Error";
	this->day = day;
	this->month = month;
	this->year = year;
}

void Date::SetMonth(unsigned short month)
{
	if (month > 12 && month == 0)
		throw "Error";
	this->month = month;
}

void Date::SetYear(short year)
{
	this->year = year;
}

unsigned short Date::GetDay() const
{
	return day;
}

unsigned short Date::GetMonth() const
{
	return month;
}

short Date::GetYear() const
{
	return year;
}
void Date::Print()
{
	cout << day << "/" << month << "/" << year;
}