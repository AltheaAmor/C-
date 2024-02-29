#include<stdio.h>

main()
{
	int row, col, total;
	
	printf("Enter a number: ");
	scanf("%d", &total);
	
	for(row = 1; row<= total; row++)
	{
		for(col = 1; col <= total; col++)
		{
		   if((col == 1) || (col == total) || (row == 1)|| (row == total)
		   || (row == col) || ((row + col) == (total + 1)))
			printf("+ ");
			else
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}
