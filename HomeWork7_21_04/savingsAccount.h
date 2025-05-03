#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <iostream>
#include "account.h"

using namespace std;

class SavingsAccount : public Account {
private:
	double interestRate;

public:
	SavingsAccount(double initialBalance = 0.0, double interestRate = 0.0);

	void applyInterest();

	void print(ostream& os) const override;
};

#endif
