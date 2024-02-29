#include<stdio.h>


main(){
	int me=0, you=0, they=5, them=7;
	
	printf("Enter a value for me:");
	scanf("%d" ,&me);
	
	printf("Enter a value for you:");
	scanf("%d",&you);
	
	if ((me < 2) && (me > 0))
	  me = you;
	if(me == 5)
	  you == they * them;
	if (me == 7)
	  you * you - 4; 
	
	
	printf("you = %d", you);
}
