#include<stdio.h>
#include<conio.h>

int i, j, n;
main(){
	printf("Enter no. of rows or column:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{   //row
	  for(j=1; j<=i;j++){  //column 
		printf("%d" ,j);
    	}
	    printf("\n");
	}
	return 0;
}

