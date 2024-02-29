#include<stdio.h>

main()
{
	int x[5][5];
	int a, b;
	int c, d = 0;
	//c = search
	//d = how many  
	for(a=0; a<5; a++)
	for(b=0; b<5; b++){
		printf("Enter the value: ");
	     scanf("%d",&x[a][b]);
	}
	
	printf("\nList Contains: \n");
	for(a=0; a<5; a++){
		for(b=0; b<5; b++)
	 printf("%5d",x[a][b]);
     printf("\n");   
	}
	
	printf("Number to be searched is: ");
	scanf("%d" , &c);
	for(a=0; a<5; a++){
		for(b=0; b<5; b++){
			if(x[a][b] == c){
				d++;
			}
		}
	}
	
	printf("\nThere are %d occurrences of the number %d", c, d);
	  
	return 0;
}
