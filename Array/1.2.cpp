#include<stdio.h>
#include<conio.h> 
  
main() {

 int x[10],i,noex, temp; 

	{
	for(i=0;i<10;i++)
	{ printf("Enter a  values: ");
		scanf("%d", &x[i]);
	}
	   printf("The original values are; ");
	   	for(i=0;i<10;i++)
	   	printf("%3d", x[i]);
	   	printf("\n\n");
	   	
	   	do 
	   	{ noex =0;
	   	   for (i=0; i<10;i++)
	   	      {if(x[i] > x[i+1])
	   	      { temp = x[i];
	   	         x[i] = x[i+1];
                 x[i+1] = temp;
                 noex = 1;
				 }
			 }   
		} while(noex);
		
		
		printf("(lowest to highest)");
		printf("\nThe sorted values are: ");
		for (i=0; i<11; i++)
		printf("%3d", x[i]);
		printf("\n\n");
		
		
		
		   printf("The lowest value is: %d\n", x[0]);
          printf("The highest value is: %d", x[10]);
       }
         return 0;
		   } 
