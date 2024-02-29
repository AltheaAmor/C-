#include<stdio.h>
#include<conio.h>
int x[9],i,j,temp;
main()
{
//input 10 values
for(i=0;i<10;i++)
{ printf("Enter a value for x: ");
scanf("%d", &x[i]);
}
printf("The original values are: ");
for (i=0; i<10; i++)
printf("%3d", x[i]);
printf("\n\n");
//sorting
for (i=0; i<9;i++)
for(j=i+1; j<10;j++)
if(x[i] > x[j])
{ temp = x[i];
x[i] = x[j];
x[j] = temp;
}
//print the sorted order
printf("(lowest to highest)");
printf("The sorted values are: ");
for (i=0; i<10; i++)
printf("%4d", x[i]);
printf("\n\n");
//print the lowest and highest value
printf("The lowest value is: %3d\n", x[0]);
printf("The highest value is: %3d", x[9]);
getch();
return 0;
}
