#include<stdio.h>

int main()
{
	int who;
	
	printf("\nTYPE THE LETTER\n Brian = 1 \n Cael = 2 \n Yuan = 3 \n Emman = 4\n");
	printf("\nEnter the name:");
	scanf("%d", &who);
	
	switch (who){
	   case 1:
	printf("\n BRIAN:\n Aamon\n Lance \n Kagura \n Estes \n Aurora");
	break;
	
		case 2:
	printf("\n CAEL: \n Selena\n Franco \n Diggie \n Hylos \n Helcurt");
	break;
	
		case 3:
	printf("\n YUAN: \n Granger\n Roger \n Claude \n Joy \n Uranus");
	break;
	
		case 4:
	printf("\n EMMAN \n Vale \n Thamuz \n Harith \n Faramis \n Ling");
	break;
}
	
	return 0; 
}
