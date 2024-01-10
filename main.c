// main.c

#include "account.h"
#include "transaction.h"

int main() {
    // Create an account with initial balance
    struct Account myAccount;
    initAccount(&myAccount, 12345, 1000.0);

    // Perform transactions
    performTransaction(&myAccount, 500.0);

    // Display the final account information
    printf("Final account information:\n");
    display(&myAccount);

    return 0;
}
