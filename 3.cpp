#include<stdio.h>

main(){
	float nu, cb, ad, aw, sb;
	
	printf("Enter the starting account balance:");
	scanf("%f" ,&sb);

	printf("\nEnter total amount of deposits:");
	scanf("%f",&ad);
    
    nu = sb+ad;
    printf("\nCurrent money in the bank:%.2f", nu);
    
    printf("\nEnter the amount you withdrawn:");
    scanf("%f" ,&aw);
    
    cb= nu-aw;
    printf("\nThe current balance:%.2f",cb);
    
   	
}
