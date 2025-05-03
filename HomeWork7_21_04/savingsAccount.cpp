#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double initialBalance, double interestRate) : Account(initialBalance), interestRate(interestRate) {}

void SavingsAccount::applyInterest() {
    balance += balance * interestRate;
}

void SavingsAccount::print(std::ostream& os) const override {
    os << "Savings Account Balance: " << balance << ", Interest Rate: " << interestRate;
}