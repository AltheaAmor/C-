#include<stdio.h>
#include<conio.h> 
  
main() {

 int x[10],i,j, temp; 

	{
	for(i=0;i<10;i++)
	{ printf("Enter a  values: ");
		scanf("%d", &x[i]);
	}
	   printf("The original values are; ");
	   	for(i=0;i<10;i++)
	   	printf("%4d", x[i]);
	   	printf("\n\n");
	   	
	   	for (i=0; i<10;i--)
        for(j=i; j>10;j--)
        if(x[i] < x[j])
        { temp = x[i];
        x[i] = x[j];
        x[j] = temp;
        } 
        
        
		
		printf("(lowest to highest)");
		printf("\nThe sorted values are: ");
		for (i=0; i<10; i++)
		printf("%4d", x[i]);
		printf("\n\n");
		
		
		
		   printf("The lowest value is: %d\n", x[0]);
          printf("The highest value is: %d", x[9]);
       }
         return 0;
		   } 



