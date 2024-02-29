#include<stdio.h>

main(){
int j, i=1;

  do {
   j=1;
   do {
   	printf("*");
   	j++;
   }  	
   while (j<=i);
   printf("\n");
   i++;
  }
  while (i<=5);
	return 0;
}
