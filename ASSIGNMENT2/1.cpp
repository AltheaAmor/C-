#include<stdio.h>
#include<string.h>

 int main()
{
	char i[50] , r[50];
	
    printf("Enter a string: "); 
    gets(i);
    
    strcpy(r, i); //copying the input
    strrev(r); // for reverse
    
    if (strcmp(i , r) == 0){
    	printf("%s is a palindrome.", i);
    	return 1;	
	} 
	else {
		printf("%s is not a palindrome", i);
		return 0; 
	}
}

