#include <stdio.h>
#include <stdlib.h>

struct node{
	int k;
	struct node *next;
};

struct node *head, *curr, *tail;

int main()
{
	head = curr = tail = NULL;
	curr = (struct node *)malloc(sizeof(struct node));
	
	printf("Enter an integer: ");
	scanf("%d", &curr->k);
	
	while(curr->k != 0)
	{
		if(head == NULL)
		{
			head = curr;
			head -> next = NULL;
			tail=curr;
		}
		else
		{
			tail -> next = curr;
			curr -> next =NULL;
			tail = curr;	
		}
		curr = (struct node *)malloc(sizeof(struct node));
	
	printf("Enter an integer: ");
	scanf("%d", &curr->k);
	}
	
	curr -> next = NULL;
	
	//printing 
	printf("\nlisted interger: ");
	curr = head;
	while(curr != NULL)
	{
		printf("%3d", curr->k);
		curr = curr -> next;
	}
	return 0;
}
