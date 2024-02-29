#include<stdio.h>

main()
{
	int row, col, total;
	
	printf("Enter a number: ");
	scanf("%d", &total);
	
	for(row = 0; row< total; row++)
	{
		for(col = 0; col < total; col++)
		{
		   if((row == col) || (row + col) == (total -1))
			printf("+");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
