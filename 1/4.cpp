#include<stdio.h>

main()
{
	int j, k;
	
	for(k=1; k<=5; k++)
	{
       	for(j=1; j<=5; j++)
		   {
		printf("%c ", j+64);
      	}
      	printf("\n");
      }
	return 0;
}
