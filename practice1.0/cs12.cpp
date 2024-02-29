#include<stdio.h>

main()
{
	int i, j;
	
	for (i=1; i<6; i++){ //row
	for (j=2; j<=i; j++){ //column
		printf("&");
	}
	printf("\n");
    }
	return 0; 
}
