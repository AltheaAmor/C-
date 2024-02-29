#include<stdio.h>

main()
{
	int a;
	int x[5];

	
	for(a=0; a<5; a++){
		 printf("Enter a value x[%d]: ",a);
     	scanf("%d",&x[a]);
	}
     	
     	printf("The result: \n");
     	for(a=0; a<5; a++){
     		printf("x[%d]=%d\n",x[a], a);
		 }
}
