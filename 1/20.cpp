#include<stdio.h>

main()
{
	int j, k;
	
	for(k=1; k<=5; k++)
	{
		for(j=1; j<=k; j++)
		{
			if(j==1|| k==5 || j==k)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}
