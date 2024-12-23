#include <stdio.h>

int main() {
    int pin = 1234, enteredPin, balance = 10000, option, amount;

    printf("Enter PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Exiting...\n");
        return 0;
    }

    while (1) {
        printf("\n1. Check Balance\n2. Withdraw\n3. Exit\n");
        printf("Choose option: ");
        scanf("%d", &option);

        if (option == 1) {
            printf("Balance: $%d\n", balance);
        } else if (option == 2) {
            printf("Withdraw Amount: $");
            scanf("%d", &amount);
            if (amount > balance)
                printf("Insufficient balance!\n");
            else {
                balance -= amount;
                printf("Withdrawn: $%d. New Balance: $%d\n", amount, balance);
            }
        } else if (option == 3) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid option!\n");
        }
    }

    return 0;
}