#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include <iostream>
#include "account.h"

using namespace std;

class CheckingAccount : public Account {
private:
	double fee;

public:
	CheckingAccount(double initialBalance = 0.0, double fee = 1.0);

	void applyFee();

	void print(ostream& os) const override;
};

#endif
