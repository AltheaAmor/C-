#include <stdio.h>
#include <stdlib.h>

struct node {
    int x;
    struct node *next;
};

struct node *head, *curr, *tail, *head2, *curr2, *tail2;

int i, temp, len = 0;

void sort(struct node *h) {
    do {
        i = 0;
        curr = h;
        
        while (curr->next != NULL) {
            // if current value is greater than the next node value, switch them
            if (curr->x > curr->next->x) {
                temp = curr->x;
                curr->x = curr->next->x;
                curr->next->x = temp;
                i = 1;
            }
            // Move to the next node
            curr = curr->next;
        }
    } while (i == 1);
}

void print_node(struct node *h) {
    curr = h;
    while (curr != NULL) {
        printf("%4d", curr->x);
        curr = curr->next;
    }
}

int main() {
    head = curr = tail = NULL;
    curr = (struct node *) malloc(sizeof(struct node));
    
    // enter integers for 1st singly list
    printf("\n1st List\n");
    printf("Enter a value for x: ");
    scanf("%d", &curr->x);
    
    while (curr->x != 0) {
        if (head == NULL) {
            head = curr;
            head->next = NULL;
            tail = curr;
        }
        else {
            tail->next = curr;
            curr->next = NULL;
            tail = curr;
        }
        
        curr = (struct node *) malloc(sizeof(struct node));
        printf("Enter a value for x: ");
        scanf("%d", &curr->x);
    }
    
    if (head == NULL) {
        printf("\nNo record entered in 1st list\n");
        printf("Proceeding to 2nd list...");
    }
    else {
        // sorting 1st singly list
        sort(head);
        
        // print sorted list
        print_node(head);
    }
    
    // 2ND SINGLY LINKED LIST
    // len will count the number of integer/s entered in the 2nd list.
    head2 = curr2 = tail2 = NULL;
    curr2 = (struct node *) malloc(sizeof(struct node));
    
    // enter integers for 2nd singly list
    printf("\n============================================\n");
    printf("\n\n2nd List\n");
    printf("Enter a value for x: ");
    scanf("%d", &curr2->x);
    
    if (curr2->x != 0) {
        len += 1;
    }
    
    while (curr2->x != 0) {
        if (head2 == NULL) {
            head2 = curr2;
            head2->next = NULL;
            tail2 = curr2;
        }
        else {
            tail2->next = curr2;
            curr2->next = NULL;
            tail2 = curr2;
        }
        
        curr2 = (struct node *) malloc(sizeof(struct node));
        printf("Enter a value for x: ");
        scanf("%d", &curr2->x);
        len++;
    }
    
    
    
    
    
    if (head2 == NULL && head == NULL) {
        printf("\n============================================\n");
        printf("\nNo record entered in 1st & 2nd lists\n");
        printf("TERMINATING PROGRAM...");
    }
    else if (head2 == NULL && head != NULL) {
        printf("\nOnly 1st list has record/s\n");
        printf("\n\nSorted Linked List Data (Ascending Order):\n");
        print_node(head);
    }
    else {
        // sorting 2nd singly list
        sort(head2);
        
        // print sorted 2nd singly list
        printf("\n\nSorted 2nd Linked List Data (Ascending Order):\n");
        print_node(head2);
        
        // if only 2nd list has the record/s
        if (head2 != NULL && head == NULL) {
            printf("\n============================================\n");
            printf("\n\nOnly 2nd list has record/s\n");
        }
        
        // if both lists have record/s
        if (head2 != NULL && head != NULL) {
            // merge
            curr2 = head2;
            
            for (i = 0; i < len - 1; i++) {
                tail->next = curr2;
                tail = curr2;
                curr2 = curr2->next;
            }
            
            // sorting the merged link lists
            sort(head);
            
            // Printing
            printf("\n============================================\n");
            printf("\n\nSorted 2 Linked List Data (Ascending Order):\n");
            print_node(head);
        }
    }
    
    return 0;
}
