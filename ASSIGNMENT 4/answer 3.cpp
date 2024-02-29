#include<stdio.h>


struct info // structure definition - child
{
	char SNumber[10];
	char SName[15];
	float Q1;
	float Q2; 
	float Q3;
	float GA; 
};


main()
{
 struct info stud_rec[5];
 int a; 
	
    for(a=0; a<5; a++)
{
	 	// student number
	printf("\nEnter student number: ");
	scanf("%s", &stud_rec[a].SNumber);
     
	// student name
	printf("Enter student surname: ");
	scanf("%s", &stud_rec[a].SName);
	
		// quiz#1
	printf("Enter student Quiz#1: ");
	   scanf("%f", &stud_rec[a].Q1);
    
	
			// quiz#2
	printf("Enter student Quiz#2: ");
      scanf("%f", &stud_rec[a].Q2);
    
	
			// quiz#3
	printf("Enter student Quiz#3: ");
    scanf("%f", &stud_rec[a].Q3);
    
     stud_rec[a].GA = (stud_rec[a].Q1 + stud_rec[a].Q2 + stud_rec[a].Q3) / 3;

 }
 printf("\n \n                 POLYTECHNIC UNIVERSITY OF THE PHILIPPINES\n");
 printf("                             QUEZON CITY BRANCH\n\n");
 printf("                                 BSIT 1-2\n  ");
 printf("\nSTUDENT NUMBER\t STUDENT NAME\tQUIZ#1\tQUIZ#2\tQUIZ#3\t GRADE AVERAGE\n\n"); 
 for(a=0; a<5; a++)
 printf("%8s\t%10s\t%0.2f\t %0.2f\t %0.2f \t %0.2f\n ",stud_rec[a].SNumber, stud_rec[a].SName, stud_rec[a].Q1, stud_rec[a].Q2, stud_rec[a].Q3,stud_rec[a].GA);
 return 0;
}

