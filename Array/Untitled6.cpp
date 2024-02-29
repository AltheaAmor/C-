#include <stdio.h>
int main() {
 int num;
int i = 0;
int binary[32];
//Input number
printf("Decimal to Binary Converter\n");
 printf("\nEnter a number: ");
 scanf("%d", &num);

 //Output
 printf("\nBinary value of %d is: ", num);

 //Conversion
 while (num > 0) {
 binary[i++] = num%2;
 num /= 2;
 }
 //Answer
 while (i--> 0) {
 printf("%d", binary[i]);
 }

 return 0;
}
