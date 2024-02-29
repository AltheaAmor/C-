#include<stdio.h>
#include<conio.h>

int x[5];
int i;

main()
{
	for(i=0; i<5; i++)
	{
		printf("Enter value for array x [%d]", i);
		scanf("%d", &x[i]);
	}
	printf("\n\n The array values are \n\n");
	for (i=0; i<5; i++)
	  printf("x[%d] = %d\n",i,x[i]);
	  return 0; 
}
