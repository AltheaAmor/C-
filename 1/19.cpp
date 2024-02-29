#include<stdio.h>

main()
{
	int j, k;
	
	for(k=1; k<=5; k++)
	{
		for(j=1; j<=5; j++)
		{
			if(k==1|| k==5 || j==1|| j==5)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}
