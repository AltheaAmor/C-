#include<stdio.h>

main ()
{
	int x[3][3];
	int k,j;
	
	for(k=0; k<3; k++)
    for(j=0; j<3; j++)
	 {printf("ENTER A NUMBER: ");
		scanf("%d", &x[k][j]);
      	}
      	printf("the values \n");
      	for(k=0; k<5; k++){
      		for(j=0; j<5; j++)
      		printf("%5", x[k][j]);
      		printf("\n");
		  }
	return 0;
}
