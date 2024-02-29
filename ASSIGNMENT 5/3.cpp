#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct N
{
	struct N* prev;
	struct N* next;
	int a;
};
	
struct N *head, *cur , *tail;

//FOR PALINDROME
bool isPalindrome(){
	if (head == NULL)
	return true; 
	
	struct N* start = head;
	struct N* end = tail; 
	
	while(start != end && end -> next != start)
	{
		if (start -> a != end -> a)
		return false; 
		
		start = start -> next;
		end = end -> prev; 
	}
	return true; 
}

int main()
{
	head = cur = tail = NULL;
	cur = (struct N *) malloc(sizeof(struct N));  //allocate 
  	printf("\n\n=====Check if the Doubly linked list is a Palindrome or not=====\n\n");
  	printf("Enter an Integer: ");
  	scanf("%d" ,&cur->a);
  	
  	while (cur -> a != 0)
  	{
  		if(head == NULL)
  		{
  			head = cur;
			  head -> prev = NULL;
  			head -> next = NULL; 
  			tail = cur; 
		  }
		  else{
		  	tail -> next = cur;
		  	cur -> prev = tail;
		  	cur -> next = NULL; 
		  	tail = cur;
		  }
		  	cur = (struct N *) malloc(sizeof(struct N));  //allocate 
  	
           	printf("Enter an Integer: ");
            scanf("%d" ,&cur->a);
	  }
	  
	  printf("\n\n\nDOUBLY LINKED LIST\n\n");

     cur = head; 
     while(cur != NULL)
     {
     	 printf("%3d", cur ->a);
	     cur = cur -> next; 
	 } 
 //FOR PALINDROME
 if(isPalindrome()) {
 	printf("\n\nThis Doubly linked list is a Palindrome\n\n"); 
 } else{
 	printf("\n\nThis Doubly linked list is  not a Palindrome\n\n"); 
 }
 
return 0; 
}
