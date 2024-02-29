#include<stdio.h>

main()
{
	int j,k,i;
	
	for(j=1; j<=5; j++)
	{
		for(i=5; i>=j; i--)
		printf(" ");
		for(k=1; k<=j; k++)
		{	
			printf("%d ", k);
		}
		printf("\n");
	}
	return 0;
}
