#include<stdio.h>
main()
{
  int i,a,w,j;
  // i= total col
  // a row
  // w  space
  // j star
  printf("Enter a number:  \n");
  scanf("%d", &i);
  
  for (a=1; a <= i;a++){
  	for (w = 1; w<= (i-a); w++)
  	printf(" ");
  
  for(j=1; j<= ((2 * a)-1); j++)
  		printf("^");

	printf("\n");
}
return 0;
}
