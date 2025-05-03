#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double initialBalance, double fee) : Account(initialBalance), fee(fee) {}

void CheckingAccount::applyFee() {
    balance -= fee;
}

void CheckingAccount::print(std::ostream& os) const {
    os << "Checking Account Balance: " << balance << ", Fee: " << fee;
}