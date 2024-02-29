#include<stdio.h>

main()
{
	int x[6][6];
	int a, b;
	int row_sum[6] = {0};
	//a for row
	//b for column
	
	for(a=1; a<6; a++)
	for(b=1; b<6; b++){
		printf("Enter a value: ",a);
	     scanf("%d",&x[a][b]);
	}
	
	printf("\nThe values: \n");
	for(a=1; a<6; a++){
		for(b=1; b<6; b++)
	 printf("%5d",x[a][b]);
     printf("\n");   
	}
	//GET THE SUM of row
	
	printf("\nThe sum of every rows\n");
	
	   for(a = 1; a<6; a++){
	    	for(b = 1; b<6; b++){
		      row_sum[a] += x[a][b];
		}
	}
     	for(a=1; a<6; a++){
     			printf("Sum of %d row =%5d\n",a,row_sum[a]);
		 }
	return 0;
}
