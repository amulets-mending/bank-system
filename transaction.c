// transaction.c

#include "transaction.h"

void performTransaction(struct Account *account, double amount) {
    printf("Performing transaction on account %d:\n", account->accountNumber);
    deposit(account, amount);
    withdraw(account, amount / 2);
    display(account);
}
