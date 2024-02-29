#include <stdio.h>
#include <stdlib.h>

struct node{
	int a;
	struct node* next; 
};

struct node *head, *curr, *tail, *head1, *curr1, *tail1;


//for sorting
void bubblesort(struct node *c)
{
	if (c == NULL)
	return;
	
	struct node* ptr1;
	struct node* ptr2 = NULL;
	int swap;
	
	do {
		swap = 0;
		ptr1 = c;
		
		while ( ptr1-> next != ptr2){
    	    	if(ptr1 -> a > ptr1 -> next -> a){
    	    	int temp = ptr1-> a;
    	    	ptr1-> a = ptr1-> next-> a;
    	    	ptr1-> next -> a = temp;
    	    	swap=1; 
			}
			ptr1 = ptr1 -> next; 	
      	}
      	ptr2 = ptr1;
	} while(swap);
}

//for sorted the 2 list 
struct node* mergelist(struct node* list1, struct node* list2)
{
	if (list1 == NULL)
	   return list2;
	if (list2 == NULL)
	    return list1;
	    
	struct node* mergedlist;
	
	if(list1 -> a <= list2 -> a){
		mergedlist = list1;
		mergedlist -> next = mergelist(list1 -> next, list2);
	}
	else{
		mergedlist = list2;
		mergedlist -> next = mergelist(list1, list2 -> next);
	}
	
	return mergedlist; 
}


void printlist(struct node* k)
	{
		struct node* currnode = k;
		while(currnode != NULL) {
			printf("%d ", currnode->a);
		 currnode = currnode -> next;
		}
		printf("\n");
	}


 int main()
{
	head = curr = tail = NULL;
	curr = (struct node *)malloc(sizeof(struct node));
	
	 printf("\n==========1ST LINKED LIST=========\n");
	printf("Enter an integer: ");
	scanf("%d", &curr->a);
	
	while(curr->a != 0)
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
	scanf("%d", &curr->a);
	}
	
	printf("\n\n1st LINKED LIST INTEGER\n");
curr = head; 
while(curr != NULL)
{
	printf("%2d", curr ->a);
	curr = curr -> next; 
}
	
//2ND LIST
	
		head1 = curr1 = tail1 = NULL;
		curr1 = (struct node *)malloc(sizeof(struct node));
		
		 printf("\n==========2ND LINKED LIST=========\n");
		printf("Enter an integer: ");
	    scanf("%d", &curr1->a);
	    
	
	while(curr1->a != 0)
	{
		if(head1 == NULL)
		{
			head1 = curr1;
			head1-> next = NULL;
			tail1=curr1;
		}
		else
		{
			tail1 -> next = curr1;
			curr1 -> next =NULL;
			tail1 = curr1;	
		}
		curr1 = (struct node *)malloc(sizeof(struct node));
	
    	printf("Enter an integer: ");
    	scanf("%d", &curr1->a);
    }
    
    printf("\n\n2ND LINKED LIST INTEGER\n");
        
       curr1 = head1; 
        while(curr1 != NULL)
       {
     	printf("%2d", curr1 ->a);
	    curr1 = curr1 -> next; 
     }
    
    printf("\n\nSorted 1st Linked List Data (Ascending Order):\n");
    printlist(head);
    printf("\n\nSorted 2nd Linked List Data (Ascending Order):\n");
    printlist(head1);

        // sorting 2nd singly list
        bubblesort(head);
        bubblesort(head1);
        
        // print sorted 2nd singly list
      
        struct node* mergedlist = mergelist(head, head1);
        
        printf("\n\nMerged List: \n\n");
        printlist(mergedlist); 
	
	return 0;
}
