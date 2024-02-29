#include<stdio.h>

main()
{
	int a,j;
	
	for (a=5; a>=1; a--)
	{
		for (j=1; j<=a; j++)
		{
		  printf("* ");
		}
		printf("\n");
	}
	return 0;
}
