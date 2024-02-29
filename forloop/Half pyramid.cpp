#include<stdio.h>
#include<conio.h>

int i, j;
main(){
	for(i=1;i<=5;i++){
	  for(j=1; j<=i;j++){
		printf("*");
    	}
	    printf("\n");
	}
	return 0;
}

