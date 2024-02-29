#include <stdio.h>
#include <stdlib.h>

struct node{
	int m;
	struct node *next;
};

struct node *head, *cur, *tail;

void LtoA(int *array, int len)
{
	struct node *cur = head;
	int b = 0; 
	
	while(cur != NULL)
	{
		array[b] = cur -> m;
		cur = cur -> next;
		b++;
	}
}

int main()
{
	head = cur = tail = NULL;
	cur = (struct node *)malloc(sizeof(struct node));
	
	printf("Enter an integer: ");
	scanf("%d" ,& cur->m);
	
	while(cur->m != 0)
	{
		if(head == NULL)
		{
			head=cur;
			head -> next = NULL;
			tail = cur; 
		}
		else {
			tail -> next = cur;
			cur -> next = NULL;
			tail = cur;
		}
		cur = (struct node *)malloc(sizeof(struct node));
	
    	printf("Enter an integer: ");
	    scanf("%d" ,& cur->m);
	}
	
	cur -> next = NULL;
	// printing 
	
	printf("\n\n\n LINKED LIST INTEGER: \n\n");
	cur = head;
	while(cur != NULL)
	{
		printf("%3d ", cur->m);
		cur = cur -> next;
	}
	
	int len = 0;
	cur = head;
	while(cur != NULL)
	{
		len++;
		cur = cur -> next; 
	}
	
	int *array = (int *)malloc(len * sizeof(int));
	
	LtoA(array, len);
	
	printf("\n\n ARRAY LIST \n\n");
	for(int b = 0; b < len; b++)
	{
		printf("%3d",array[b]);
	}
	
	free(array);
	cur = head;
	while(cur != NULL)
	{
		
			struct node *temp = cur;
			cur = cur->next;
			free(temp);
	}
	
	return 0; 
}
