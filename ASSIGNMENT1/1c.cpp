#include<stdio.h>

main()
{
	int x[6][6];
	int a, b;
	int row_sum[6] = {0};
	
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
	
	printf("\nThe sum of every rows\n");
	
	   for(a = 1; a<6; a++){
	    	for(b = 1; b<6; b++){
		      row_sum[a] += x[a][b];
		}
	}
     	for(a=1; a<6; a++){
     			printf("Sum of %d row =%5d\n",a,row_sum[a]);
		 }
// if equal or not equal of the row 
       int equal_row = 1;
         for(a=1; a<5; a++) {
         	if (row_sum[a] != row_sum[a+1]) {
         		equal_row = 0;
         		break;
			 }
		 }
		 
		 if(equal_row){
		 	printf("\nRows sums are equal");
			} else {
				printf("\nRows sum are not equal");
			}
        	
          
	return 0;
}
