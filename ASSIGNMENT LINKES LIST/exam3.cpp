#include<stdio.h>
#include<conio.h>
int x[5],i,j,temp;
main()
{ //clrscr();
for(i=0;i<5;i++)
 { printf("Enter a value for x: ");
 scanf("%d", &x[i]);
 }
 printf("The original values are: ");
 for (i=0; i<5; i++)
printf("%3d", x[i]);
 // Sorting
for (i=0; i<4;i++)
for(j=i+1; j<5;j++)
if(x[i] > x[j])
 { temp = x[i];
 x[i] = x[j];
 x[j] = temp;
 }
 printf("The sorted values are: ");
 for (i=0; i<5; i++)
printf("%3d", x[i]);
 getch(); return 0;
 }

