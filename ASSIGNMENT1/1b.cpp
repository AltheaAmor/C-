#include<stdio.h>

main()
{
	int x[6][6];
	int a, b;
	int column_sum[6] = {0};
	//a for row
	//b for column
	
	for(a=1; a<6; a++)
	for(b=1; b<6; b++){
		printf("Enter a value: ");
	     scanf("%d",&x[a][b]);
	}
	
	printf("\nThe values: \n");
	for(a=1; a<6; a++){
		for(b=1; b<6; b++)
	 printf("%5d",x[a][b]);
     printf("\n");   
	}
	//GET THE SUM of column
	
	printf("\nThe sum of every column\n");
	
	   for(a = 1; a<6; a++){
	    	for(b = 1; b<6; b++){
		      column_sum[b] += x[a][b];
		}
	}
     	for(b=1; b<6; b++){
     			printf("Sum of %d column =%5d\n",b,column_sum[b]);
		 }
	return 0;
}

