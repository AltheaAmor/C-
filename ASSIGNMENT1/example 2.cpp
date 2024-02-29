#include<stdio.h>
#include<conio.h>
int x[5][5];
int i,j;
main()
{ 
 // Enter integer values in the 3x3 array
 for (i=0; i<5; i++)
 for (j=0; j<5; j++)
 { printf("Enter an integer value: ");
 scanf("%d", &x[i][j]); // input numbers are entered row-wise
 }
 printf("\nThe array values are\n\n");
 // Printing the array values
 for (i=0; i<5; i++)
 { for (j=0; j<5; j++)
 printf("%5d", x[i][j]);
 printf("\n");
 }
 getch();
 return 0;
}

