#include<stdio.h>

main()
{
	int j,k;
	
	for(j=1; j<=5; j++)
	{
		for(k=1; k<=j; k++)
		{
			if(j==5| k==1 || j==k)
			
			printf("* ");
			else
					printf("  ");
		
		}
		printf("\n");
	}
	return 0;
}
