#include<stdio.h>

main(){
	int i, j;
	printf(" Enter the factorial inerger number:");
	scanf("%d" ,&j);
	
	int result = 1; 
	for (int i=j; i>j; i--)
	printf("%dx" ,i);
	printf("1");
	
	for (int i=j; i>1; i--) {
		result *=i;
	} 
	printf("\n %d! = %d\n", j, result);

	return 0;
}
	
	
	
	
	
	
	

