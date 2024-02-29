#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
	int x;
	struct node *next;
};

struct node *head, *curr, *tail;

void LinktoArray(int *array, int length)
{
	struct node *curr = head;
	int i = 0;
	
	// intersecting the linked list tas icopy ang value sa array
	while (curr != NULL)
	{
		array[i] = curr->x;
		curr = curr->next;
		i++;
	}
}

int main()
{
	head = curr = tail = NULL;
	
	// first node ng linked list
	curr = (struct node *)malloc(sizeof(struct node));
	
	printf("Enter an Integer: ");
	scanf("%d", &curr->x);
	
	
	// taking input/integers; 0 to terminate
	while (curr->x != 0)
	{
		// first node, iset as head
		if (head == NULL)
		{
			head = curr;
			head->next = NULL;
			tail = curr;
		}
		else
		{
			// iadd ang node sa end ng linked list
			tail->next = curr;
			curr->next = NULL;
			tail = curr;
		}
		
		// new node for the next input; 0 to terminate
		curr = (struct node *)malloc(sizeof(struct node));
		
		printf("Enter an Integer: ");
		scanf("%d", &curr->x);
	}
	
	// No records were entered
	if (head == NULL)
	{
	
	printf("No records Entered");
	return 0;
}

	curr = head;
	int length = 0;
	
	// count the number of nodes sa linked list
	while (curr != NULL)
	{
		length++;
		curr = curr->next;
	}
	
	// creating an array with the same lenght sa linked list
	int *array = (int *)malloc(length * sizeof(int)); 
	
	//LinkedtoArrayConverter
	LinktoArray(array, length);
	
	printf("\n\nARRAY: \n\n");
	for (int i = 0; i<length; i++)
	{
		printf("%3d", array[i]);
	}
	
		free(array);
		
		curr = head;
		while (curr != NULL)
		{
			//Free Malloc
			struct node *temp = curr;
			curr = curr->next;
			free(temp);
		}
		return 0;
}
