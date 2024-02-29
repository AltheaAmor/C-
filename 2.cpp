#include<stdio.h>

main(){
	
	int hpr, now, num;
	
	printf("Enter the hourly pay rate:");
	scanf("%d" ,&hpr);
	printf("Enter the number of hours worked for the week:");
	scanf("%d" ,&now);
	num = hpr * now;
	printf("%d is the pay for the week!!!",num);
}
