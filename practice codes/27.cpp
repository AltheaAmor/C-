#include<stdio.h>

main()
{
	int a,j;
	
	for (a=1; a<=5; a++)
	{
	for (j=5; j>=a; j--)
	{
		printf("%d ",j);
	}
	 printf("\n");
   }
	return 0; 
}
