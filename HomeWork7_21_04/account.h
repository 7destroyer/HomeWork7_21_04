#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

using namespace std;

class Account {
protected:
	double balance;
	static int accountCount;

public:
    Account(double initialBalance = 0.0);
    virtual ~Account();

    double getBalance() const;
    virtual void print(ostream& os) const;

    // Перегрузка оператора + (сложение балансов)
    Account operator+(const Account& other) const;

    // Перегрузка оператора == (сравнение балансов)
    bool operator==(const Account& other) const;

    // Дружественный оператор << (вывод в поток)
    friend ostream& operator<<(ostream& os, const Account& account);

    static int getAccountCount();
};

#endif