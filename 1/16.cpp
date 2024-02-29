#include<stdio.h>

main()
{
	int j, k;
	
	for(k=5; k>=1; k--)
	{
		for(j=k; j>=1; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
