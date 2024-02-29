#include<stdio.h>

struct info
{
	char SNumber[10];
	char SName[15];
	float Q1;
	float Q2; 
	float Q3;
	float GA; 
};

// struct info stud_rec; // Structure declaration 

main()
{
	int a; 
	struct info stud_rec;
	// student number
	printf("Enter student number: ");
	scanf("\n");
	gets(stud_rec.SNumber);
	
	// student name
	printf("Enter student name: ");
	scanf("\n");
	gets(stud_rec.SName);
	
		// quiz#1
	printf("Enter student Quiz#1: ");
	scanf("\n");
	gets(stud_rec.Q1);
	
			// quiz#2
	printf("Enter student Quiz#2: ");
	scanf("\n");
	gets(stud_rec.Q2);
	
			// quiz#3
	printf("Enter student Quiz#3: ");
	scanf("\n");
	gets(stud_rec.Q3);
	
	
	
	return ();	
}
