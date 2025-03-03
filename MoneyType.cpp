#include "MoneyType.h"

void MoneyType::Initialize(long newDollars, long newCents) {
	dollars = newDollars;
	cents = newCents;
}

long MoneyType::DollarsAre() const {
	return dollars;
}

long MoneyType::CentsAre() const {
	return cents;
}
void ExtMoneyType::Initialize(long newDollars, long newCents, string newCurrency) {
	currency = newCurrency;
	MoneyType::Initialize(newDollars, newCents);
}

string ExtMoneyType::CurrencyIs() const{
	return currency;
}