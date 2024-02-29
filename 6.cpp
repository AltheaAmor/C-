#include<stdio.h>
#include<conio.h>

main(){
	float hrsw, rph; 
	hrsw=rph= 0.00
	printf("Enter hours worked for a week:");
	scanf("%f" ,&hrsw);
	print("Enter the rate per hour:");
	scanf("%f" ,&rph);
	
	if (hrsw < = 40)
	    printf("Week's wage of the employee is %.2f", hrsw*rph);
	else 
printf("Week's wage of the employee is %0.2f", (40 * hrsw) + ((rph - 40) * (1.5 * hrsw)));
	    
	getch();
	return 0;
	
}
