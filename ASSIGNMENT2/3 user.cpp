#include<stdio.h>

int primenum(int a){
    if(a <= 1) {
        return 0;
    }
    int b;
    for(b = 2; b < a; b++){
    	if( a % b == 0){
    		return 0;
		}
	}
	return 1; 
}
   
int main() { 
    int c;
    do {
    	printf("\nEnter a number(Enter 0 to exit):  ");
        scanf("%d", &c);
        if (primenum(c)){
        	printf("%d is a prime number. \n", c);
		  } else if (c != 0) {
		  	    printf("%d is not a prime number. \n", c);
		  }  
	   }  while(c != 0);
	   
    return 0;
}

