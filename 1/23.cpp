#include<stdio.h>

main()
{
	int j,k;
	
	for(j=1; j<=5; j++)
	{
		for(k=1; k<=j; k++)
		{	
			printf("%d ", k%2);
		}
		printf("\n");
	}
	return 0;
}
