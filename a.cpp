#include<stdio.h>

main(){
	
	int a = 6, b = 3, c = 0;
	c = a;
	a = b;
	b = c; 
    printf ("%3d%3d%3d", c,b,a); 
}
