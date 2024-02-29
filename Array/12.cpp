#include<stdio.h>
#include<conio.h>
int i,j,subset=0;
int SetB[9];
int SetA[4];
main()
{ 
//input 10 values
printf("\nInput 5 values for Set A\n");
	for(i=0;i<5;i++)
	{ printf("Enter a value: ");
		scanf("%d", &SetA[i]);
	}
	
printf("\nInput 10 values for Set B\n");
	for(i=0;i<10;i++)
	{ printf("Enter a value: ");
		scanf("%d", &SetB[i]);
	}
	
 for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            if (SetA[i] == SetB[j]) {
                subset = 1;
                break;
            }
        }
        
        if (subset == 1) {
            printf("Set A is a subset of Set B\n");
            return 0;
        }
        
        if (subset == 0) {
            printf("subArray is not a subset of mainArray\n");
            return 0;
        }
}

getch();
return 0;
}
