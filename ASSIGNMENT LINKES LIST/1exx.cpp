#include <stdio.h>
#include <stdlib.h>

struct node
{
	int a;
	struct node *next;
};
// link = next
// curr = pointer

struct node *head, *curr, *tail;

int main()
{
	head = curr = tail = NULL;
	curr = (struct node *)malloc(sizeof(struct node));
	
	printf("ENTER AN INTEGER: ");
	scanf("%d" ,&curr->a);
	
	while(curr -> a != 0)
	{
		if(head == NULL)
		{
			head = curr;
			head -> next = NULL;
			tail = curr;
		}
		else {
			tail -> next = curr;
			curr -> next = NULL;
			tail = curr; 
			
		}
		curr = (struct node *)malloc(sizeof(struct node));
		
		printf("ENTER AN INTEGER: ");
     	scanf("%d" ,&curr -> a);
	}
	
curr -> next = NULL;
	//print the singly linked list
printf("\n\n\nLINKED LIST INTEGER");

curr = head; 
while(curr != NULL)
{
	printf("%2d", curr ->a);
	curr = curr -> next; 
}

return 0; 
}
