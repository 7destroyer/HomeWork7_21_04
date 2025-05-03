#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double initialBalance, double interestRate) : Account(initialBalance), interestRate(interestRate) {}

void SavingsAccount::applyInterest() {
    balance += balance * (interestRate/100.0);
}

void SavingsAccount::print(ostream& os) const {
    os << "Savings Account Balance: " << balance << ", Interest Rate: " << interestRate;
}