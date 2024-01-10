// account.c

#include <stdio.h>
#include "account.h"

void initAccount(struct Account *account, int accNumber, double initialBalance) {
    account->accountNumber = accNumber;
    account->balance = initialBalance;
}

void deposit(struct Account *account, double amount) {
    account->balance += amount;
}

void withdraw(struct Account *account, double amount) {
    if (account->balance >= amount) {
        account->balance -= amount;
    } else {
        printf("Insufficient funds!\n");
    }
}

void display(struct Account *account) {
    printf("Account Number: %d, Balance: $%.2f\n", account->accountNumber, account->balance);
}
