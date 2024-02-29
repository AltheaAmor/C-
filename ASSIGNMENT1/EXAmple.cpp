#include<stdio.h>
#include<conio.h>
int x[2][3][3];
int i,j,k;
main()
{ 
 // Enter integer values in the 2x3x3 array
 for (i=0; i<2; i++)
 for (j=0; j<3; j++)
 for (k=0;k<3;k++)
 { printf("Enter an integer value: ");
 scanf("%d", &x[i][j][k]);
 }
 printf("\nThe array values are\n");
 // Printing the array values
 for (i=0; i<2; i++)
 { printf("\nTable %d values:\n\n ", i);
 for (j=0; j<3; j++)
 { for (k=0;k<3;k++)
 printf("%5d",x[i][j][k]);
 printf("\n");
 }
 }
 getch();
 return 0;
}
