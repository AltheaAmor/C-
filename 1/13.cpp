#include<stdio.h>

main()
{
	int j, k;
	
	for(k=1; k<=5; k++)
	{
		for(j=k; j<=5; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
