#include<stdio.h>
main()
{
  int total,row,col; 
 
  printf("Enter a number: ");
  scanf("%d", &total);
 
  for (row = 1; row <= total; row++)
  {
    	for (col = 1; col <= row; col++)
        {
  	      if(col == 1 || row == total || row == col)
  	       {
  	       	printf("0 ");
			 }
			 else
			 {
			 	printf("  ");
			 }
	    }
	   printf("\n");
  }
  
  
return 0;
}
