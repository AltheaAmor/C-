#include<stdio.h>
#include<malloc.h>

struct N
{
	int a;
	struct N *next;
};

struct N *head, *cur , *tail;

main ()
{
	head = cur = tail = NULL; 
	cur = (struct N *) malloc(sizeof(struct N)); //allocate 

printf("Enter an Integer: ");
scanf("%d" , &cur->a); 

while(cur->a != 0)
{
  if(head == NULL)
  {
  	head = cur;
  	head -> next = NULL;
  	tail = cur;
  }
  else
  {
  	tail -> next = cur;
  	cur -> next = NULL;
  	tail = cur;
  }
  	cur = (struct N *) malloc(sizeof(struct N));  //allocate 
  	
  	printf("Enter an Integer: ");
  	scanf("%d" ,&cur->a);
}

//print the singly linked list
printf("\n\n\nLINKED LIST INTEGER");

cur = head; 
while(cur != NULL)
{
	printf("%2d", cur ->a);
	cur = cur -> next; 
}

return 0; 
}
