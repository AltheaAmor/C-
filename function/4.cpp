#include<stdio.h>
#include<conio.h>
#include<string.h>
char nickname[20];
char nick[6];
char niknik[6];
char str1[20] = "Welcome";
char str2[20] = "Hello W";
char str3[30] = "Welcome to C Programming!";
char str4[30] = "Sample";
char str5[30];
char str6[35] = "I'm an example of function strchr";
main()
{ 
 printf("Enter your Real name: ");
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
 if (strncmp(str1,str2,5) == 0)
 printf("String 1 and String 2 are equal");
 else
 printf("String 1 and String 2 are not equal");
 printf("\n");

 strcat(nickname,str1);
 printf("Value of nickname after concatenation: %s \n", nickname);
 printf("The new value of nickname is %s\n",nickname);
 strncat(nickname,str3,3);
 printf("Value of nickname after concatenation: %s \n", nickname);
 strcpy(str4,str3);
 printf("String str4 is %s\n ", str4);
 
 // strnset(str1,3);
 //printf("String str1 is %s\n ", str1);
 //if string1 = "Welcome" and printf("%s", strnset("Welcome", '*', 3));
 //printf("%0.2f", pow(10, fmod(5.00, 3.00)));
 
 printf("%0.2f", sqrt(25.00) + abs(-10)/floor(2.5) * fmod(25.00, 7.00));
 
 
 
 printf("%s", strnset(str1,'*',3));


 printf("%s\n",strchr(str6,'c')); // for searching the occurrence of the character from the
//beginning til the end of the string
 printf("%s\n",strrchr(str6,'c')); // searching the occurrence of the character from the end till the
//beginning of the string
 printf("%s\n", strstr(str6,"examp")); // searching the occurrence of the string specified in the
//format.

 strcpy(str4,str1);
 printf("%s in lower case is %s\n", str4, strlwr(str1));
 printf("%s in upper case is %s\n", str4, strupr(str1));

 printf("Enter a string for nick: ");
 scanf("%s", &nick);
 strcpy(niknik,nick);
 printf("VAlue of niknik is %s\n", niknik);

 // another way

 printf("Duplicate string is %s \n", strdup(niknik));
 getch(); return 0;
}
