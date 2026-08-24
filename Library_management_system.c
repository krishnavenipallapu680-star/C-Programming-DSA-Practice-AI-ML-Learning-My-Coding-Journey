#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book books[100];
    int choice;
    int count = 0;
    int searchId;

    do
    {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &books[count].id);

                printf("Enter Book Name: ");
                scanf("%s", books[count].name);

                printf("Enter Author Name: ");
                scanf("%s", books[count].author);

                count++;

                printf("Book added successfully!\n");
                break;

            case 2:
                printf("\nBook Details:\n");

                for(int i = 0; i < count; i++)
                {
                    printf("\nID: %d", books[i].id);
                    printf("\nName: %s", books[i].name);
                    printf("\nAuthor: %s\n", books[i].author);
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                for(int i = 0; i < count; i++)
                {
                    if(books[i].id == searchId)
                    {
                        printf("Book Found!");
                        printf("\nName: %s", books[i].name);
                        printf("\nAuthor: %s", books[i].author);
                    }
                }
                break;

            case 4:
                printf("Exiting Library System...");
                break;

            default:
                printf("Invalid choice");
        }

    } while(choice != 4);

    return 0;
}
