#include<stdio.h>
#include<conio.h>
#include<malloc.h> 

struct node 
{ int x,temp;
 struct node *next;
};
struct node *head, *curr, *tail; 

int main()
{
 head=curr=tail=NULL; 
 
 curr = (struct node *) malloc(sizeof(struct node));
 
 printf("Enter a value for x: ");
 scanf("%d", &curr->x);
 
 while(curr->x != 0)
 { if (head == NULL) 
{ head = curr;
 head->next = NULL;
 tail = curr;
}
 else 
 { tail->next = curr;
curr->next = NULL;
tail = curr;
 }
 curr = (struct node *) malloc(sizeof(struct node)); 

 printf("Enter a value for x: ");
 scanf("%d", &curr->x);
 }

 
 printf("\n\nLinked list data:\n\n");
 curr = head;
 
 while (curr != NULL)
 { printf("%3d", curr->x);
 curr = curr->next;
 }

// Sorting
for (i= curr->x; i< curr->x;i++)
for(curr->next=i+1; curr->next<x;j++)
if(x[curr->x] > x[curr->next])
 { temp = x[curr->x];
 x[curr->x] = x[curr->next];
 x[curr->next] = temp;
 }
 
 //printing the sorted 
 printf("The sorted values are: ");
 for (curr->x=x; i<x; i++)
printf("%3d", x[i]);
printf("\n\n");
 getch(); 
 return 0;

}
