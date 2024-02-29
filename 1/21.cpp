#include<stdio.h>

main()
{
	int j,k;
	
	for(j=1; j<=5; j++)
	{
		for(k=1; k<=5; k++)
		{
			if(j==1|| k==5 || k==1 || j==5)
			
			printf("* ");
			else
					printf("  ");
		
		}
		printf("\n");
	}
	return 0;
}
