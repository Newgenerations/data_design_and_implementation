#include "DateType.h"
void DateType::initialize(int newMonth, int newDay, int newYear)
{
	month = newMonth;
	day = newDay;
	year = newYear;
}

int DateType::YearIs() const
{
	return year;
}

int DateType::MonthIs() const
{
	return month;
}

int DateType::DayIs() const
{
	return day;
}

RelationType DateType::ComparedTo(DateType aDate) {
	if (year < aDate.year)
		return LESS;
	else if (year > aDate.year)
		return GREATER;
	else if (month < aDate.month)
		return LESS;
	else if (month > aDate.month)
		return GREATER;
	else if (day < aDate.day)
		return LESS;
	else if (day > aDate.day)
		return GREATER;
	else
		return EQUAL;
}