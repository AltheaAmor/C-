#include<stdio.h>

main (){

  	float num;
	int num1, hrs1, hrs, mins=60;
	printf("Enter number of hours:");
	scanf("%f" ,&num);
	
	hrs = num*60; 
	printf("%.2f hour/s is %d minute/s\n", num, hrs); 
	
	printf("Enter number of minutes:");
	scanf("%d" ,&num1);
	
	hrs1 = num1 / 60;
	mins = num1 % 60; 
	printf("%d minutes is %d hour/s and %d minute/s",num1, hrs1, mins);
	
	return 0; 
}
