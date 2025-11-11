#include <stdio.h>

int main() {
    int choice;
    double balance = 1000.00, amount;

    do {
        printf("\nWelcome to the ATM!\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is $%.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%lf", &amount);
                balance += amount;
                printf("Deposit successful. New balance: $%.2f\n", balance);
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%lf", &amount);
                if (amount > balance) {
                    printf("Insufficient funds.\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: $%.2f\n", balance);
                }
                break;
            case 4:
                printf("Thank you for using the ATM!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);
    return 0;
}
