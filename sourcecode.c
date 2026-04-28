#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* --- Structure Definition --- */
typedef struct Ride {
    int rideID;
    char customerName[50];
    char destination[50];
    float fare;
    struct Ride* next;
} Ride;

/* --- Function Prototypes --- */
void addRide(Ride** head);
void displayRides(Ride* head);
void updateRide(Ride* head);
void deleteRide(Ride** head);
void searchRide(Ride* head);
void freeList(Ride* head);

/* --- Main Menu --- */
int main() {
    Ride* head = NULL;
    int choice;

    while (1) {
        printf("\n===================================");
        printf("\n    RAPIDO PLATFORM SYSTEM");
        printf("\n===================================");
        printf("\n1. Add Ride (Create)");
        printf("\n2. Display All Rides (Read)");
        printf("\n3. Update Ride (Update)");
        printf("\n4. Delete Ride (Delete)");
        printf("\n5. Search Ride");
        printf("\n6. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addRide(&head); break;
            case 2: displayRides(head); break;
            case 3: updateRide(head); break;
            case 4: deleteRide(&head); break;
            case 5: searchRide(head); break;
            case 6: 
                freeList(head);
                printf("System Shutdown. Memory Cleared.\n");
                exit(0);
            default: printf("Invalid option!\n");
        }
    }
    return 0;
}

/* --- CRUD Implementations --- */

void addRide(Ride** head) {
    Ride* newNode = (Ride*)malloc(sizeof(Ride));
    if (!newNode) return;

    printf("Enter Ride ID: ");
    scanf("%d", &newNode->rideID);
    printf("Customer Name: ");
    scanf("%s", newNode->customerName);
    printf("Destination: ");
    scanf("%s", newNode->destination);
    printf("Fare: ");
    scanf("%f", &newNode->fare);
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Ride* temp = *head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
    printf("Ride logged successfully.\n");
}

void displayRides(Ride* head) {
    if (!head) { printf("\nNo active rides.\n"); return; }
    printf("\nID\tName\t\tDest\t\tFare");
    while (head) {
        printf("\n%d\t%s\t\t%s\t\t%.2f", head->rideID, head->customerName, head->destination, head->fare);
        head = head->next;
    }
    printf("\n");
}

void updateRide(Ride* head) {
    int id;
    printf("Enter ID to Update: ");
    scanf("%d", &id);
    while (head) {
        if (head->rideID == id) {
            printf("New Destination: ");
            scanf("%s", head->destination);
            printf("New Fare: ");
            scanf("%f", &head->fare);
            printf("Update complete.\n");
            return;
        }
        head = head->next;
    }
    printf("Ride not found.\n");
}

void deleteRide(Ride** head) {
    int id;
    printf("Enter ID to Delete: ");
    scanf("%d", &id);
    Ride *temp = *head, *prev = NULL;

    if (temp && temp->rideID == id) {
        *head = temp->next;
        free(temp);
        printf("Ride deleted.\n");
        return;
    }
    while (temp && temp->rideID != id) {
        prev = temp;
        temp = temp->next;
    }
    if (!temp) return;
    prev->next = temp->next;
    free(temp);
    printf("Ride deleted.\n");
}

void searchRide(Ride* head) {
    int id;
    printf("Search ID: ");
    scanf("%d", &id);
    while (head) {
        if (head->rideID == id) {
            printf("Found: %s to %s ($%.2f)\n", head->customerName, head->destination, head->fare);
            return;
        }
        head = head->next;
    }
    printf("Not found.\n");
}

void freeList(Ride* head) {
    Ride* temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
