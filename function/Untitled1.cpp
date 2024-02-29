#include<stdio.h>
#include<conio.h>
#include<string.h>
char nickname[20];
char nick[6];
char niknik[6];
char str1[20] = "Good day!";
char str2[20] = "Morning";
char str3[30] = "Welcome to C Programming!";
//char str4[20] = "Sample;
char str5[30];
char str6[50] = "The quick brown fox jumped over the lazy dog";
main()
{ //clrscr();
 printf("Enter your nickname: ");
 scanf("%s", &nickname);
 printf("%s\n",nickname);
 // Another way to input using the puts() and gets() functions
 puts("Enter your nickname: ");
 scanf("\n");
 gets(nickname);
 puts(nickname);
 
 printf("Length of string %s = %d\n", str1,strlen(str1));
 
 if (strcmp(str1,str2) == 0)
 printf("String 1 and String 2 are equal");
 else
 printf("String 1 and String 2 are not equal");
 printf("\n");
 
 strcat(nickname,str1);
 printf("Value of nickname after concatenation: %s \n", nickname);
 printf("The new value of nickname is %s\n",nickname);
 strncat(nickname,str3,3);
 printf("Value of nickname after concatenation: %s \n", nickname);
// strcpy(str4,str3);
 //printf("String str4 is %s\n ", str4);
  printf("%s", strcat(str2, str1)); 
 
 strncpy(str5,str3,5);
 printf("String str5 is %s\n ", str5);

 printf("%s\n",strchr(str6,'o')); // for searching the occurrence of the character from the
//beginning til the end of the string
 printf("%s\n",strrchr(str6,'o')); // searching the occurrence of the character from the end till the
//beginning of the string
 printf("%s\n", strstr(str6,"examp")); // searching the occurrence of the string specified in the
//format.
// strcpy(str4,str1);
// printf("%s in lower case is %s\n", str4, strlwr(str1));
// printf("%s in upper case is %s\n", str4, strupr(str1));

 printf("Enter a string for nick: ");
 scanf("%s", &nick);
 strcpy(niknik,nick);
 printf("VAlue of niknik is %s\n", niknik);

 // another way

 printf("Duplicate string is %s \n", strdup(niknik));
 getch(); return 0;
}
