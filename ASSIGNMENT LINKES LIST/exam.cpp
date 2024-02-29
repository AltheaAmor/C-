#include<stdio.h>
#include<conio.h>
#include<malloc.h> // a pre-processing directive used for allocating a memory location
struct node // structure definition for the record node
{ int x;
 struct node *next;
};
struct node *head, *curr, *tail; //structure declaration for the pointer variables head, curr
//and tail
main()
{ //clrscr();
 head=curr=tail=NULL; // initialize pointer variables to NULL
 // allocate a node
 curr = (struct node *) malloc(sizeof(struct node));
 //Enter first value of x 
 printf("Enter a value for x: ");
 scanf("%d", &curr->x);
 // Test if value of x is not equal to zero. If true, then proceed to the next statement. If false, then
 //go to the next statement after the while structure.
 while(curr->x != 0)
 { if (head == NULL) // If true, then the current node (curr) will be the head node
{ head = curr;
 head->next = NULL;
 tail = curr;
}
 else // if false, then the current node (curr) will be linked to the previous node
 { tail->next = curr;
curr->next = NULL;
tail = curr;
 }
 curr = (struct node *) malloc(sizeof(struct node)); //allocate another memory location for curr
//in preparation for the next input
 printf("Enter a value for x: ");
 scanf("%d", &curr->x);
 }

// goto tapos;
 // Printing the data in the Singly linked list
 printf("\n\nLinked list data:\n\n");
 curr = head;
  // Assign the address pointed to by head to the pointer variable curr
 while (curr != NULL)
 { printf("%3d", curr->x);
 curr = curr->next;
 }
//tapos:

 getch();
return 0;
}
