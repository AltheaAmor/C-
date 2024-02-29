#include<stdio.h>
#include<conio.h>

int i, j;
main(){
	for(i=1;i<=5;i++)
	{
		 for(j=1; j<=5;j++)
		 {
		 		if(i==j && i<=3|| i+j==6&& i<3||i+j==7 && i==4 || i+j==8 && i==5)
				 {
		 		printf("*");	
				 }
				 else 
				 printf(" ");
		 }
		         printf("\n"); 
	}
	return 0;
}
	
	
	
	
	
	
	

