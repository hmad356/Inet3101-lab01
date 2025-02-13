#include <stdio.h>

// These functions just tell the compiler that these functions exist
void PrintAllRecords(); 
void AddRecord();
void DeleteLastRecord();
void PrintNumRecords();
void PrintDatabaseSize();
void PrintNumChanges();

int main() {
    int choice;

    while (1) {
        // thses lines show the menu to the user
        printf("\n--- Menu ---\n");
        printf("1. Print all records\n");
        printf("2. Add record\n");
        printf("3. Delete the last record\n");
        printf("4. Print number of records\n");
        printf("5. Print database size\n");
        printf("6. Print number of changes\n");
        printf("7. Exit\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        // These actually is what happens when they enter they're answer and it it branches from their answer till they exit
        if (choice == 1) {
            PrintAllRecords();
        } else if (choice == 2) {
            AddRecord();
        } else if (choice == 3) {
            DeleteLastRecord();
        } else if (choice == 4) {
            PrintNumRecords();
        } else if (choice == 5) {
            PrintDatabaseSize();
        } else if (choice == 6) {
            PrintNumChanges();
        } else if (choice == 7) {
            printf("Exiting the program\n");
            return 0;
        } else {
            printf("Invalid choice. Please enter a number between 1 and 7.\n");
        }
    }

    return 0;
}

// This area just lets the user know that they're action was completed
void PrintAllRecords() {
    printf("You selected: Print all records\n");
}

void AddRecord() {
    printf("You selected: Add record\n");
}

void DeleteLastRecord() {
    printf("You selected: Delete the last record\n");
}

void PrintNumRecords() {
    printf("You selected: Print number of records\n");
}

void PrintDatabaseSize() {
    printf("You selected: Print database size\n");
}

void PrintNumChanges() {
    printf("You selected: Print number of changes\n");
}
