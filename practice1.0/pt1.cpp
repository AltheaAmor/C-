#include<stdio.h>

main()
{
	int row, col, i;
	
	printf("Enter a number: ");
	scanf("%d", &row);
	
	for (col=1; col<=row; col++)
	{
	      for (i=1; i<=col; i++)
	      {
           	printf("*");
          }
          printf("\n");
   }
return 0;
}
