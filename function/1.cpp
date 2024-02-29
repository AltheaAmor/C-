#include <stdio.h>
#include <ctype.h>
#include<conio.h>

int main () {
 int var1 = 'd';
 int var2 = '2';
 int var3 = '\t';
 int var4 = ' ';
 if( isalpha(var1) ) {
 printf("var1 = |%c| is alphabetic\n", var1 );
 } else {
 printf("var1 = |%c| is not alphabetic\n", var1 );
 }
 if( isalpha(var2) ) {
 printf("var2 = |%c| is alphabetic\n", var2 );
 } else {
 printf("var2 = |%c| is not alphabetic\n", var2 );
 }
 if( isalpha(var3) ) {
 printf("var3 = |%c| is alphabetic\n", var3 );
 } else {
 printf("var3 = |%c| is not alphabetic\n", var3 );
 }
 if( isalpha(var4) ) {
 printf("var4 = |%c| is alphabetic\n", var4 );
 } else {
 printf("var4 = |%c| is not alphabetic\n", var4 );
 }
 getch();
 return(0);
}
