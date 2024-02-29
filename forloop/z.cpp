#include<stdio.h>

main(){
	int i, j;
	for(i=1; i<= 5; i++){	//row
	for (j=1; j<=5; j++){  //column 
		 if (i==1 || i+j==6 || i==5)
		 {
		printf("*");
	     }
		else 
		printf(" "); 
	}	
	 printf("\n"); 
   }
}
