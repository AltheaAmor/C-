#include<stdio.h>
#include<conio.h>

int x[5], i, sum=0;

main()
{
	for(i=0; i<5; i++)
	{
		printf("Enter an integer value: ");
		scanf("%d", &x[i]);
	}
	for(i=0; i<5; i++)
	 sum = sum + x[i];
	 
	 printf("\n the sum of the values");
	 for (i=0; i<5; i++)
	 printf("%3d",x[i]);
	 printf("is %d", sum);
	 
	 getch();
	 return 0;
}
