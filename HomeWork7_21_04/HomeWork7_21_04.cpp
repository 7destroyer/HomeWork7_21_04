/*
Задача 10: Банковская система с наследованием
Темы: наследование, friend, const, inline, перегрузка +, ==, .h файлы, static
Описание:
Account — базовый класс. Производные: SavingsAccount и CheckingAccount. Добавить подсчет количества аккаунтов, перегрузку операторов +, ==, <<.
Структура:
•   Класс Account: double balance, static int accountCount
•   SavingsAccount: double interestRate, метод applyInterest()
•   CheckingAccount: double fee, метод applyFee()
Методы: operator+, operator==, friend operator<<, getBalance()
Вход: список аккаунтов
Выход: информация и общий баланс
*/

#include <iostream>
#include <vector>
#include "account.h"
#include "savingsAccount.h"
#include "checkingAccount.h"

int main() {
    vector<Account*> accounts;

    accounts.push_back(new SavingsAccount(1000.0, 0.05));
    accounts.push_back(new CheckingAccount(500.0, 2.0));
    accounts.push_back(new Account(200.0));

    double totalBalance = 0.0;
    for (Account* account : accounts) {
        cout << *account << endl; // Используем перегруженный оператор <<
        totalBalance += account->getBalance();
    }

    cout << "Total balance of all accounts: " << totalBalance << endl;
    cout << "Number of accounts: " << Account::getAccountCount() << endl;

    Account acc1(100.0);
    Account acc2(200.0);
    Account acc3 = acc1 + acc2;
    cout << "Account 3 balance (acc1 + acc2): " << acc3 << endl;

    if (acc1 == Account(100.0)) {
        cout << "Account 1 balance is equal to 100.0" << endl;
    }

    for (Account* account : accounts) {
        delete account;
    }
    accounts.clear();

    return 0;
}
