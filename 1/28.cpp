#include<stdio.h>

main()
{
	int j,k;
	
	for(j=1; j<=5; j++)
	{
	
		for(k=1; k<=j; k++)
		{	
			printf("%d ", k);
		}
		printf("\n");
	}
		for(j=4; j>=1; j--)
	{
		for(k=1; k<=j; k++)
		{	
			printf("%d ", k);
		}
		printf("\n");
	}
	return 0;
}
