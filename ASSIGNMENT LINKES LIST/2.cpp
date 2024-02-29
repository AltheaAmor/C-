#include<stdio.h>
#include<malloc.h>

struct N
{
	int a;
	struct N *next;
};

struct N *head, *cur , *tail;

//sorting
void bubleSort()
{
	if (head == NULL)
	return;
	
	
	int swap;
	struct N* pr1;
	struct N* pr2 = NULL;
	
	do
	{
	  swap = 0;
	  pr1 = head;
	  
	        while (pr1 -> next != pr2)
	        {
	  	       if (pr1 -> a > pr1 -> next -> a)
	  	        {
	  	       	  int temp = pr1 -> a;
	  	       	  pr1 -> a = pr1 -> next -> a;
	  	       	  pr1 -> next -> a = temp;
	  	       	  swap = 1; 
				 }
	  	     pr1 = pr1 -> next; 
		
        	}
        	pr2 = pr1;
    } while(swap); 
      
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
	printf("%4d", cur ->a);
	cur = cur -> next; 
}

bubleSort(); 

// printing the sorted list
printf("\n\n\nSORTED LINKED LIST INTERGER\n\n\n");

cur = head;
while (cur != NULL)
{
	printf("%4d", cur ->a);
	cur = cur ->next;
}

end: 
return 0; 
}
