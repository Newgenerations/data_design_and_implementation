#pragma once
#include<string>
#include "DateType.h"
using namespace std;
class PersonType
{
public:
	void Initialize(string, DateType);
	string NameIs();
	DateType BirthdateIs() const;
private:
	string name;
	DateType birthdate;
};

