#include<stdio.h>


  int factorial(int a);
   
   int main()
     { 
        int a, b;
        //a integer
        //b result
        printf("Enter an Integer:  ");
        scanf("%d", &a);
        
        b = factorial(a);
        printf("Factorial = %d", b); 
    }
    
    int factorial(int a)
    {
    	int c, d = 1;
    	for(c = 1; c <=a; c++)
		{
    		d=d*c;
		}
			return(d); 
	}

