#include<stdio.h>

main()
{
	int a;
	int x[10];
    	int c, d= 0;
	
	for(a=0; a<10; a++){
		 printf("Enter a value x[%d]: ",a);
     	scanf("%d",&x[a]);
	}

	printf("\nList Contains: \n");
	for(a=0; a<10; a++){
	 printf("%5d",x[a]);  
	}
	
	printf("\n\nNumber to be searched is: ");
	scanf("%d" , &c);
	for(a=0; a<10; a++){
			if(x[a] == c){
				d++;
			}
		}
	
	printf("\n\nThere are %d occurrences of the number %d", c, d);
	  
	return 0;
}
