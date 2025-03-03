#pragma once
#include <string>
using namespace std;
class MoneyType
{
public:
	void Initialize(long, long);
	long DollarsAre() const;
	long CentsAre() const;
private:
	long dollars;
	long cents;
};

class ExtMoneyType : public MoneyType
{
public:
	string CurrencyIs() const;
	void Initialize(long, long, string);
private:
	string currency;
};
