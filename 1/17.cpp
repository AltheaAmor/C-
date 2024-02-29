#include<stdio.h>

main()
{
	int j, k;
	
	for(k=1; k<=5; k++)
	{
		for(j=1; j<=k; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
