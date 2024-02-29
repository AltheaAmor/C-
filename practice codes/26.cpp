#include<stdio.h>

main()
{
	int a,j;
	
	for (a=5; a>=1; a--)
	{
	for (j=5; j>=a; j--)
	{
		printf("%d ",j);
	}
	 printf("\n");
   }
	return 0; 
}
