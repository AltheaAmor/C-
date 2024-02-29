#include<stdio.h>

main()
{
	int total,row, col, star;
	
	printf("Enter a number: ");
	scanf("%d", &total);
	
	for (row=1; row<=total; row++)
	{
	      for (col=1; col<=(total-row); col++)
	      printf(" ");
	         	for (star=1; star<=((2* row)-1);star++)
	         	
	         	  	printf("1");	 
                      printf("\n");
   }
return 0;
}
