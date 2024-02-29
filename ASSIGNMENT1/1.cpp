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
	
	printf("The values: \n");
	for(a=0; a<5; a++){
		for(b=0; b<5; b++)
	 printf("%5d",x[a][b]);
     printf("\n");   
	}
	  
	return 0;
}
