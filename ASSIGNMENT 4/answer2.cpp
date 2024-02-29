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

struct student // structure definition - Mother
{
 struct info subj[5];
};
main()
{
 float temp;
 struct student stud_rec;
 int a; 

	
    for(a=0; a<5; a++)
{
	 	// student number
	printf("\nEnter student number: ");
	scanf("\n");
    gets(stud_rec.subj[a].SNumber);
	
	// student name
	printf("Enter student surname: ");
	scanf("\n");
	gets(stud_rec.subj[a].SName);
		// quiz#1
	printf("Enter student Quiz#1: ");
	   scanf("%f", &temp);
      stud_rec.subj[a].Q1 = temp;
	
			// quiz#2
	printf("Enter student Quiz#2: ");
      scanf("%f", &temp);
      stud_rec.subj[a].Q2 = temp;
	
			// quiz#3
	printf("Enter student Quiz#3: ");
       scanf("%f", &temp);
      stud_rec.subj[a].Q3 = temp;
      
      
      stud_rec.subj[a].GA = (stud_rec.subj[a].Q1 + stud_rec.subj[a].Q2 + stud_rec.subj[a].Q3) / 3;
 }
 //display values 
 printf("\n \n               POLYTECHNIC UNIVERSITY OF THE PHILIPPINES\n");
 printf("                            QUEZON CITY BRANCH\n\n");
 printf("                               BSIT 1-2\n  ");
 printf("\nSTUDENT NUMBER\t STUDENT NAME\tQUIZ#1\tQUIZ#2\tQUIZ#3\tGRADE AVERAGE\n"); 
 for(a=0; a<5; a++)
 printf("%8s\t%10s\t%0.2f\t %0.2f\t %0.2f\t %0.2f\n ",stud_rec.subj[a].SNumber, stud_rec.subj[a].SName, stud_rec.subj[a].Q1, stud_rec.subj[a].Q2, stud_rec.subj[a].Q3, stud_rec.subj[a].GA );
 return 0;
}

