#include<stdio.h>

main()
{
	int j, k;
	
	for(k=5; k>=1; k--)
	{
       	for(j=5; j>=k; j--)
		   {
		printf("%d ", j);
      	}
      	printf("\n");
      }
	return 0;
}
