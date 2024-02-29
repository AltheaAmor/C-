#include<stdio.h>

int main()
{
	int who;
	
	printf("TYPE THE LETTER\n Brian = 1 \n Cael = 2 \n Yuan = 3 \n Emman = 4");
	printf("\nEnter the name:");
	scanf("%d", &who);
	
	switch (who){
	   case 1:
	printf("Aamon\n Lance \n Kagura \n Estes \n Aurora");
	break;
	
		case 2:
	printf("Selena\n Franco \n Diggie \n Hylos \n Helcurt");
	break;
	
		case 3:
	printf("Granger\n Roger \n Claude \n Joy \n Uranus");
	break;
	
		case 4:
	printf(" Vale \n Thamuz \n Harith \n Faramis \n Ling");
	break;
}
	
	return 0; 
}
