#include<stdio.h>
#include<malloc.h>

struct N
{
	int a;
	struct N *next;
};

struct N *head, *cur , *tail;

void LA(int *array , int len ){
	
	struct N *cur = head;
	int b = 0;
	
	while (cur != NULL)
	{
		array[b] = cur->a;
		cur = cur->next;
		b++;
	}
}

int main ()
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
printf("\n\n\nLINKED LIST INTEGER\n\n");

cur = head; 
while(cur != NULL)
{
	printf("%3d", cur ->a);
	cur = cur -> next; 
}

int len = 0;
cur = head;
while (cur != NULL){
	len++;
	cur = cur ->next;
}

int *array = (int *)malloc(len * sizeof(int)); 
	
	//LinkedtoArrayConverter
	LA(array, len);
	
	printf("\n\nARRAY: \n\n");
	for (int b = 0; b<len; b++)
	{
		printf("%3d", array[b]);
	}
	
		free(array);
		
		cur= head;
		while (cur != NULL)
		{
			struct N *temp = cur;
			cur = cur->next;
			free(temp);
		}
return 0; 
}
