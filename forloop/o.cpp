#include<stdio.h>
#include<conio.h>

int i, j;
main(){
	for(i=1;i<=5;i++)
	{
		 for(j=1; j<=6;j++)
		 {
		 		if(j==1 || i==5 || j==6 || i==1) 
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
	
	
	
	
	
	
	

