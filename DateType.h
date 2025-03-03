#pragma once
enum RelationType { LESS, GREATER, EQUAL };
class DateType
{
public:
	void initialize(int newMonth, int newDay, int newYear);
	int YearIs() const;
	int MonthIs() const;
	int DayIs() const;
	RelationType ComparedTo(DateType aDate);
private:
	int year;
	int month;
	int day;
};

