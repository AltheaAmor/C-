#include<stdio.h>
#include<conio.h>

int i, j;
main(){
	for(i=1;i<=5;i++){ //rows 
	  for(j=5; j>=i;j--){ //column 
		printf("*");
    	}
	    printf("\n");
	}
	return 0;
}

