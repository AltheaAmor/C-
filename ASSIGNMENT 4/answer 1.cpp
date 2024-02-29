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
 struct info subj[3];
};
main()
{
 float temp;
 struct student stud_rec;
 int i;
 
 // Enter the 3 subjects in their respective fields
 for (i=0; i<3;i++)
{
	// student number
	printf("\nEnter student number: ");
	scanf("\n");
    gets(stud_rec.subj[i].SNumber);
	
	// student name
	printf("Enter student name: ");
	scanf("\n");
	gets(stud_rec.subj[i].SName);
	  
		// quiz#1
	printf("Enter student Quiz#1: ");
	   scanf("%f", &temp);
      stud_rec.subj[i].Q1 = temp;
	
			// quiz#2
	printf("Enter student Quiz#2: ");
      scanf("%f", &temp);
      stud_rec.subj[i].Q2 = temp;
	
			// quiz#3
	printf("Enter student Quiz#3: ");
       scanf("%f", &temp);
      stud_rec.subj[i].Q3 = temp;
 }
 printf("\nSTUDENT NUMBER\tSTUDENT NAME\tQUIZ#1\tQUIZ#2\tQUIZ#3\n\n"); 
 for (i =0; i<3; i++)
 printf("%5c\t\t%5c\t\t %0.2f\t %0.2f\t %0.2f\n ",stud_rec.subj[i].SNumber, stud_rec.subj[i].SName, stud_rec.subj[i].Q1, stud_rec.subj[i].Q2, stud_rec.subj[i].Q3 );
 return 0;
}

