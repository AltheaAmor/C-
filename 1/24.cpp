#include<stdio.h>

main()
{
	int j,k,i=1;
	
	for(j=1; j<=5; j++)
	{
		for(k=1; k<=j; k++)
		{	
			printf("%d ", (i++)%2);
		}
		printf("\n");
	}
	return 0;
}
