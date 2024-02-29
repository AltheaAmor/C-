#include<stdio.h>

main()
{
	int a,j;
	
	for (a=5; a>=1; a--)
	{
	for (j=5; j>=a; j--)
	{
		printf("%c ",j+64);
	}
	 printf("\n");
   }
	return 0; 
}
