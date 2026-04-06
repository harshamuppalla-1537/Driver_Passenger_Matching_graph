#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Node (Driver / Passenger)
typedef struct Node {
    int id;
    char type[10];
    struct Node* next;
} Node;

// Edge (Match)
typedef struct Edge {
    int dest;
    int weight;
    struct Edge* next;
} Edge;

// Graph
typedef struct Graph {
    Node* nodes[MAX];
    Edge* adjList[MAX];
} Graph;

Graph graph;

// Initialize graph
void initGraph() {
    for (int i = 0; i < MAX; i++) {
        graph.nodes[i] = NULL;
        graph.adjList[i] = NULL;
    }
}

// MENU
void showMenu() {
    printf("\n==============================\n");
    printf("Ride Matching System\n");
    printf("==============================\n");
    printf("1. Add Driver\n");
    printf("2. Add Passenger\n");
    printf("3. Create Match (Driver <-> Passenger)\n");
    printf("4. View All Matches\n");
    printf("5. Update Match Distance\n");
    printf("6. Remove Match\n");
    printf("7. Remove User\n");
    printf("0. Exit\n");
    printf("------------------------------\n");
    printf("Enter your choice: ");
}

// ADD NODE
void addNode(int id, char* type) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->id = id;
    strcpy(newNode->type, type);
    newNode->next = graph.nodes[id];
    graph.nodes[id] = newNode;

    printf("Driver/Passenger added successfully.\n");
    printf("ID: %d (%s)\n", id, type);
}

// ADD EDGE
void addEdge(int src, int dest, int weight) {
    Edge* newEdge = (Edge*)malloc(sizeof(Edge));
    newEdge->dest = dest;
    newEdge->weight = weight;
    newEdge->next = graph.adjList[src];
    graph.adjList[src] = newEdge;

    printf("Match created successfully.\n");
    printf("Driver %d <-> Passenger %d\n", src, dest);
    printf("Distance: %d km\n", weight);
}

// DISPLAY GRAPH
void displayGraph() {
    printf("\nCurrent Ride Matches:\n");

    int empty = 1;

    for (int i = 0; i < MAX; i++) {
        if (graph.nodes[i] != NULL) {
            empty = 0;
            printf("\n%s ID %d:\n", graph.nodes[i]->type, i);

            Edge* temp = graph.adjList[i];
            if (!temp) {
                printf("  No matches available.\n");
            }

            while (temp) {
                printf("  -> Passenger %d (Distance: %d km)\n",
                       temp->dest, temp->weight);
                temp = temp->next;
            }
        }
    }

    if (empty) {
        printf("No users or matches found.\n");
    }
}

// UPDATE EDGE
void updateEdge(int src, int dest, int newWeight) {
    Edge* temp = graph.adjList[src];

    while (temp) {
        if (temp->dest == dest) {
            temp->weight = newWeight;
            printf("Match updated successfully.\n");
            printf("Driver %d is now %d km away from Passenger %d\n",
                   src, newWeight, dest);
            return;
        }
        temp = temp->next;
    }

    printf("Match not found.\n");
}

// DELETE EDGE
void deleteEdge(int src, int dest) {
    Edge* temp = graph.adjList[src];
    Edge* prev = NULL;

    while (temp) {
        if (temp->dest == dest) {
            if (prev)
                prev->next = temp->next;
            else
                graph.adjList[src] = temp->next;

            free(temp);
            printf("Match removed between Driver %d and Passenger %d\n", src, dest);
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    printf("Match not found.\n");
}

// DELETE NODE
void deleteNode(int id) {
    if (graph.nodes[id] == NULL) {
        printf("User not found.\n");
        return;
    }

    printf("Removing %s with ID %d...\n", graph.nodes[id]->type, id);

    free(graph.nodes[id]);
    graph.nodes[id] = NULL;

    // Remove edges pointing to this node
    for (int i = 0; i < MAX; i++) {
        deleteEdge(i, id);
    }

    printf("User removed successfully.\n");
}

// MAIN
int main() {
    initGraph();

    int choice, id, src, dest, weight;

    while (1) {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Driver ID: ");
                scanf("%d", &id);
                addNode(id, "driver");
                break;

            case 2:
                printf("Enter Passenger ID: ");
                scanf("%d", &id);
                addNode(id, "passenger");
                break;

            case 3:
                printf("Enter Driver ID: ");
                scanf("%d", &src);
                printf("Enter Passenger ID: ");
                scanf("%d", &dest);
                printf("Enter Distance (km): ");
                scanf("%d", &weight);
                addEdge(src, dest, weight);
                break;

            case 4:
                displayGraph();
                break;

            case 5:
                printf("Enter Driver ID: ");
                scanf("%d", &src);
                printf("Enter Passenger ID: ");
                scanf("%d", &dest);
                printf("Enter New Distance: ");
                scanf("%d", &weight);
                updateEdge(src, dest, weight);
                break;

            case 6:
                printf("Enter Driver ID: ");
                scanf("%d", &src);
                printf("Enter Passenger ID: ");
                scanf("%d", &dest);
                deleteEdge(src, dest);
                break;

            case 7:
                printf("Enter User ID to remove: ");
                scanf("%d", &id);
                deleteNode(id);
                break;

            case 0:
                printf("Exiting program. Goodbye.\n");
                exit(0);

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}