#include<stdio.h>

main (){
	
	int hrs1, hrs2, num, mins=60;
	
	printf("Enter number of hours:");
	scanf("%d" ,&num);
	
	hrs1 = num*60; 
	printf("%d hour/s is %d minute/s\n", num, hrs1); 
	
	printf("\nEnter number of minutes:");
	scanf("%d" ,&num);
	
	hrs2 = num/60;
	mins = num%60; 
	printf("%d minutes is %d hour/s and %d minute/s\n",num, hrs2, mins); 
}
