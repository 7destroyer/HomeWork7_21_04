#include "Account.h"

int Account::accountCount = 0;

Account::Account(double initialBalance) : balance(initialBalance) {
    accountCount++;
}

Account::~Account() {
    accountCount--;
}

double Account::getBalance() const {
    return balance;
}

void Account::print(std::ostream& os) const {
    os << "Account Balance: " << balance;
}

Account Account::operator+(const Account& other) const {
    return Account(balance + other.balance);
}

bool Account::operator==(const Account& other) const {
    return (balance == other.balance);
}

ostream& operator<<(std::ostream& os, const Account& account) {
    account.print(os);
    return os;
}

int Account::getAccountCount() {
    return accountCount;
}