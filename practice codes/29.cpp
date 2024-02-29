#include<stdio.h>

main()
{
	int a,j;
	
	for (a=1; a<=5; a++)
	{
	for (j=a; j>=1; j--)
	{
		printf("%c ",j+64);
	}
	 printf("\n");
   }
	return 0; 
}
