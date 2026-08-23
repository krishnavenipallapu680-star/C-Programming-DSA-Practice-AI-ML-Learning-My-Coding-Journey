#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char phone[15];
};

struct Contact phonebook[MAX_CONTACTS];
int total_contacts = 0;

void addContact() {
    if (total_contacts >= MAX_CONTACTS) {
        printf("Phonebook is full!\n");
        return;
    }

    printf("Enter name: ");
    scanf(" %[^\n]", phonebook[total_contacts].name);

    printf("Enter phone number: ");
    scanf("%s", phonebook[total_contacts].phone);

    total_contacts++;
    printf("Contact added successfully!\n");
}

void displayContacts() {
    if (total_contacts == 0) {
        printf("\nNo contacts found.\n");
        return;
    }

    printf("\n--- Contact List ---\n");
    for (int i = 0; i < total_contacts; i++) {
        printf("%d. Name: %s | Phone: %s\n", i + 1, phonebook[i].name, phonebook[i].phone);
    }
}

void searchContact() {
    char search_name[50];
    int found = 0;

    printf("Enter name to search: ");
    scanf(" %[^\n]", search_name);

    for (int i = 0; i < total_contacts; i++) {
        if (strcmp(phonebook[i].name, search_name) == 0) {
            printf("Found: Name: %s | Phone: %s\n", phonebook[i].name, phonebook[i].phone);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contact not found.\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n=== Contact Book ===\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                printf("Exiting Contact Book. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
