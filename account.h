// account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

struct Account {
    int accountNumber;
    double balance;
};

void initAccount(struct Account *account, int accNumber, double initialBalance);
void deposit(struct Account *account, double amount);
void withdraw(struct Account *account, double amount);
void display(struct Account *account);

#endif // ACCOUNT_H
