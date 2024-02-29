#include<stdio.h>
main()
{
int i, j, temp, x[5], y[10], mix[11];
//Input values Set 1
printf("Input 5 values for Set 1\n");
for(i=0; i < 5; i++)
{
printf("Input a value: ");
scanf("%d",&x[i]);
}
//Input values Set 2
printf("\nInput 5 values for Set 2\n");
for(i=5; i < 10; i++) {
printf("Input a value: ");
scanf("%d",&y[i]);
}
//Sorting Set 1
for (i=0; i<5;i++)
for(j=i+1; j<5;j++)
if(x[i] > x[j])
{ temp = x[i];
x[i] = x[j];
x[j] = temp;
}
//Sorting Set 2
for (i=5; i<10;i++)
for(j=i+1; j<10;j++)
if(y[i] > y[j])
{ temp = y[i];
y[i] = y[j];
y[j] = temp;
}
//Print sorted Set 1
printf("\n(Ascending Order)\n");
printf("The sorted values of Set 1 are: ");
for (i=0; i<5; i++)
printf("%3d", x[i]);
//Print sorted Set 2
printf("\n\nThe sorted values of Set 2 are: ");
for (i=5; i<10; i++)
printf("%3d", y[i]);



return 0;
}
