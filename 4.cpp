#include<stdio.h>

main(){
	int age,nu;
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age>=16){
		printf("You are old enough to drive!!!");
	}
	if(age<16){
		nu=age-16;
		printf("%d years they must wait before they can drive legally.",nu);
	}
}
