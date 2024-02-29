#include<stdio.h>

main()
{
	int j, k;
	
	for(k=5; k>=1; k--)
	{
		for(j=1; j<=k; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
