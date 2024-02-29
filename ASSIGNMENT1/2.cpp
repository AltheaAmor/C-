#include<stdio.h>

main()
{
	int x[5][5];
	int a, b;
	
	for(a=0; a<5; a++)
	for(b=0; b<5; b++){
		printf("Enter the value: ");
	     scanf("%d",&x[a][b]);
	}
	
	printf("\nThe original array: \n");
	for(a=0; a<5; a++){
		for(b=0; b<5; b++)
	 printf("%5d",x[a][b]);
     printf("\n");   
	}

//change the value to zero if it is negative
     for(a=0; a<5; a++){
     	for(b=0; b<5; b++){
     		if (x[a][b] < 0){
     			x[a][b] = 0; 
			 }
		 }
	 }
		printf("\nChange array: \n");
		 for(a=0; a<5; a++){
		 	for(b=0; b<5; b++){
		 		printf("%5d",x[a][b]);
			 }
			 printf("\n");
		 }
	
	return 0;
}
