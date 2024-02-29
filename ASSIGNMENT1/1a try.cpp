#include<stdio.h>

#define ROWS 5
#define COL 5 
main()
{
	int x[ROWS][COL];
	int a, b;
	int row_sum[ROWS] = {0};
	//a for column
	//b for rows
	
	for(a=0; a<ROWS; a++)
	for(b=0; b<COL; b++){
		printf("Enter the value: ");
	     scanf("%d",&x[a][b]);
	}
	
	printf("The values: \n");
	for(a=0; a<ROWS; a++){
		for(b=0; b<COL; b++)
	 printf("%5d",x[a][b]);
     printf("\n");   
	}
	//GET THE SUM
	
	printf("\nThe sum of every rows\n");
	
	   for(a = 0; a<ROWS; a++){
	    	for(b = 0; b<COL; b++){
		      row_sum[a] += x[a][b];
		}
	}
     	for(a=0; a<ROWS; a++){
     		printf("row %5d sum: \n",row_sum[a]);
		 }
	return 0;
}
