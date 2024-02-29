#include<stdio.h>

main (){
	int j, i=1;
	
	
	while(i<=5){
		j=1;
		while(j<=i){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
