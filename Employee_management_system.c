#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int choice;
    int count = 0;

    do
    {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[count].id);

                printf("Enter Employee Name: ");
                scanf("%s", emp[count].name);

                printf("Enter Salary: ");
                scanf("%f", &emp[count].salary);

                count++;

                printf("Employee added successfully!\n");
                break;

            case 2:
                printf("\nEmployee Details:\n");

                for(int i = 0; i < count; i++)
                {
                    printf("\nID: %d", emp[i].id);
                    printf("\nName: %s", emp[i].name);
                    printf("\nSalary: %.2f\n", emp[i].salary);
                }
                break;

            case 3:
                printf("Exit...");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 3);

    return 0;
}
