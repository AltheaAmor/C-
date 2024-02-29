#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head;
struct node* tail;

// Function to create a new node
struct node* createNode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node in the doubly sorted list
void insertNode(int value) {
    struct node* newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        if (value <= head->data) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        } else if (value >= tail->data) {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        } else {
            struct node* current = head->next;
            while (current != NULL && current->data < value) {
                current = current->next;
            }

            newNode->next = current;
            newNode->prev = current->prev;
            current->prev->next = newNode;
            current->prev = newNode;
        }
    }
}

// Function to display the doubly sorted list
void displayList() {
    struct node* current = head;
    printf("Doubly Sorted List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    head = NULL;
    tail = NULL;

    // Inserting elements in the doubly sorted list
    insertNode(5);
    insertNode(2);
    insertNode(9);
    insertNode(1);
    insertNode(7);

    // Displaying the doubly sorted list
    displayList();

    return 0;
}

