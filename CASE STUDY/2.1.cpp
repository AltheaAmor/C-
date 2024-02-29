#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int choice;

// structure definition
struct node {
    struct node *prev;
    int x;
    struct node *next;
};

struct node *head, *curr, *tail; // structure declaration
    
// function prototyping
void create();
void disnormal();
void disreverse();
void ascend();
void descend();
void insert();
void dele();

int main () {
	
	int close = 0; // initialize ng value for close para masatisfy yung condition below
	
	while(close != 1) { // magrarun continously unless close = 1
	menu:
    system("cls");
    
    printf("\t\t\t\t\t\t\t=========================================\n\n");
    printf("\t\t\t\t\t\t\t                MAIN MENU                \n\n");
    printf("\t\t\t\t\t\t\t=========================================\n\n");
    printf("\t\t\t\t\t\t\t1. Create a Doubly Linked List\n");
    printf("\t\t\t\t\t\t\t2. Display a Doubly Linked List\n");
    printf("\t\t\t\t\t\t\t   21. Normal order\n");
    printf("\t\t\t\t\t\t\t   22. Reverse order\n");
    printf("\t\t\t\t\t\t\t3. Sort a Doubly Linked List\n");
    printf("\t\t\t\t\t\t\t   31. Ascending\n");
    printf("\t\t\t\t\t\t\t   32. Descending\n");
    printf("\t\t\t\t\t\t\t4. Insert a Node\n");
    printf("\t\t\t\t\t\t\t5. Delete a Node\n");
    printf("\t\t\t\t\t\t\t6. Search a number in the list.\n");
    printf("\t\t\t\t\t\t\t7. Exit\n\n");
    
    printf("\t\t\t\t\t\t\tEnter choice: ");
    scanf("%d", &choice);
    
    system("cls");
    
    switch (choice) {
        case 1: 
			create();
            break;
        case 2: 
			printf("\n\nLinked List Data: ");
			disnormal();
            break;
        	case 21: 
				printf("\n\nLinked List Datacin Normal Order: ");
				disnormal();
        		break;
        	case 22: 
				printf("\n\nLinked List Data in Reverse Order: ");
				disreverse();
        		break;
         case 3: 
		 	printf("\n\nSorted Linked List Data: ");
		 	ascend();
            break;
            case 31: 
				printf("\n\nSorted Linked List Data in Ascending Order: ");
				ascend();
                break;
            case 32: 
				printf("\n\nSorted Linked List Data in Ascending Order: ");
				descend();
            	break;
        case 4: 
			printf("\n\nNew Linked List Data: "); 
			insert();
            break;
        case 5: 
			printf("\n\nNew Linked List Data: ");
			dele();
            break;
       /* case 6: search();
            break; */
        case 7: 
			printf("\n\t\t\t\t\t\t\tThank you for using our program!\n\n");
        	close = 1; // the program will exit
            break;
        default: printf("\n\n\t\t\t\t\t\t\tInvalid number! Choose 1-7 only.");
        		 printf(" \n\n\t\t\t\t\t\t\tPress any key to continue\n");
            getch();
            goto menu;
    }
	} 
	printf("\n\t\t\t\t\t\t\tEnd of program.");
    getch();
    return 0;
} 

void create() {

    head = curr = tail = NULL; // initialize the pointer to null
        
    curr = (struct node *)malloc(sizeof(struct node)); // allocate the node
        
    printf("Enter a value for x: ");
    scanf("%d", &curr->x);
        
    while(curr->x != 0) {
        if(head == NULL) {
            head = curr;
            head->prev = NULL;
            head->next = NULL;
            tail = curr;
        } else {
            tail->next = curr;
            curr->prev = tail;
            curr->next = NULL;
            tail = curr;
        }
            
        curr = (struct node *)malloc(sizeof(struct node));
            
        printf("Enter a value for x: ");
        scanf("%d", &curr->x);
	}   
    getch();
    printf("End of program.");
    getch();
}

void disnormal() {

    if (head == NULL) {
    	printf("No data!");
        printf("\n\nCreate a doubly linked list first"); 
    } 
	else {
        curr = head;
        while (curr != NULL) {
            printf("%3d ", curr->x);
            curr = curr->next;
        }
    }
    getch();

}

void disreverse() {
	
    if (head == NULL) {
    	printf("No data!");
        printf("\n\nCreate a doubly linked list first.");  
    } else {

        curr = tail;
        while (curr != NULL) {
            printf("%3d ", curr->x);
            curr = curr->prev;
        }
    }
    getch();
} 

void ascend() {  

    int temp;  
    struct node *curr;
    struct node *tail;
    
    //Check whether list is empty  
    if(head == NULL) {  
    	printf("No data!");
        printf("\n\nCreate a doubly linked list first\n");
    }  
    else {  
        //Current will point to head
        curr = head;  
        while(curr->next != NULL) {  
            //tail will point to node next to current
            tail = curr->next;  
            while(tail != NULL) {  
                //If current's data is greater than tail's data, swap the data of current and tail  
                if(curr->x > tail->x) {  
                    temp = curr->x;  
                    curr->x = tail->x;  
                    tail->x = temp;  
                } 
                tail = tail->next; 
            } 
            curr = curr->next;
        }  
        
        curr = head;
        while (curr != NULL) {
            printf("%3d ", curr->x);
            curr = curr->next;
        }
    }  
    getch();
} 

void descend() {  

    int temp;  
    struct node *curr;
    struct node *tail;
    
    //Check whether list is empty  
    if(head == NULL) {  
    	printf("No data!");
        printf("\n\nCreate a doubly linked list first\n");  
    }  
    else {  
        //Current will point to head
        curr = head;  
        while(curr->next != NULL) {  
            // tail will point to node next to current
            tail = curr->next;  
            while(tail != NULL) {  
                //If current's data is less than tail's data, swap the data of current and tail 
                if(curr->x < tail->x) {  
                    temp = curr->x;  
                    curr->x = tail->x;  
                    tail->x = temp;  
                } 
                tail = tail->next; 
            } 
            curr = curr->next;
        }  
        
        curr = head;
        while (curr != NULL) {
            printf("%3d ", curr->x);
            curr = curr->next;
        }
    }  
    getch();
} 

void insert() {
	
	ascend();
	// check if the list is empty
	if(head == NULL) {
		return;
	} 
	
	// create a new node and assign the value
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	printf("\n\nEnter a value for new node: ");
	scanf("%d", &newnode->x);
	
	newnode->prev = NULL;
	newnode->next = NULL;
	
	if(newnode->x < head->x) { //check if the new node should be inserted at the beginning
		newnode->next = head;
		head->prev = newnode;
		head = newnode;
	}
	else if(newnode->x > head->x) { //check if the new node should be inserted at the end
		newnode->prev = tail;
		tail->next = newnode;
		tail = newnode;
	}
	else { // insert the new node in the middle of the list
		struct node *temp = head; // temp will point to head
		while(temp->next != NULL && temp->next->x < newnode->x) { // temp pointer will move to the next node if true
			temp = temp->next; 
		}
		newnode->prev = temp; // newnode->prev will point to temp
		newnode->next = temp->next; //newnode->next will point to the node next to temp
		
		if(temp->next != NULL) {
			temp->next->prev = newnode; // the node next to temp will point to new node
		}
		
		temp->next = newnode; // the new node will become the node next to temp
	}
		
	//printing of new linked list data after insertion
	disnormal();
	
	getch();
}

void dele() {
    int numdel;

    if (head == NULL) {
        printf("No data \n\nCreate a doubly linked list first!");
        printf("\n\nPress any key to continue");
        getch();
        return;
    } 
    
        printf("Enter the number you want to delete: ");
        scanf("%d", &numdel);

        struct node *temp = head;
        struct node *curr = NULL;

        if (temp != NULL && temp->x == numdel) {
            head = temp->next;
            delete temp;
            return;
        } else {
            while (temp != NULL && temp->x != numdel) {
                curr = temp;
                temp = temp->next;
            }

            if (temp == NULL) {
                return;
        	}

            curr->next = temp->next;
        }
        
        system("cls");
        disnormal();
        
    getch();
}
