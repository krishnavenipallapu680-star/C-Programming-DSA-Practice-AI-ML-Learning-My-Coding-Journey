#include <stdio.h>

int main()
{
    int pin = 1234;
    int enteredPin;
    int choice;
    float balance = 5000;
    float amount;

    printf("Welcome to ATM\n");

    printf("Enter PIN: ");
    scanf("%d", &enteredPin);

    if(enteredPin != pin)
    {
        printf("Wrong PIN");
        return 0;
    }

    do
    {
        printf("\n\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Your Balance = %.2f", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                balance = balance + amount;
                printf("Money deposited successfully");
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if(amount <= balance)
                {
                    balance = balance - amount;
                    printf("Please collect your money");
                }
                else
                {
                    printf("Insufficient balance");
                }
                break;

            case 4:
                printf("Thank you for using ATM");
                break;

            default:
                printf("Invalid choice");
        }

    } while(choice != 4);

    return 0;
}
