#include<stdio.h>
#include<string.h>

int palindrome(char str[]);

int main()
{
	char str[100];
	  printf("Enter a string: "); 
      scanf("%s", str);
      
      int c = palindrome(str); 
      printf("%d", c);
      return 0; 
}

int palindrome(char str[])
{	
   int a, b, len; 
   len = strlen(str); 
   for (a = 0, b = len - 1; a < b; a++, b--){
   	if (str[a] != str[b]) {
   		printf("%s is not a palindrome. \n", str);
   		return 0; 
	   }
   }
   printf("%s is a palindrome. \n", str);
   return 1; 
}

