#include <stdio.h>

int main() {
    int choice;
    double balance = 1000.00;
    double amount;

    while (1) {
        printf("\n=== Bank Account System ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nCurrent Balance: $%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: $");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited $%.2f. New Balance: $%.2f\n", amount, balance);
                } else {
                    printf("Invalid amount entered.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: $");
                scanf("%lf", &amount);
                if (amount > balance) {
                    printf("Error: Insufficient funds! Current balance is $%.2f\n", balance);
                } else if (amount <= 0) {
                    printf("Invalid amount entered.\n");
                } else {
                    balance -= amount;
                    printf("Successfully withdrew $%.2f. Remaining Balance: $%.2f\n", amount, balance);
                }
                break;

            case 4:
                printf("\nThank you for using our banking system. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please select an option between 1 and 4.\n");
        }
    }

    return 0;
}
