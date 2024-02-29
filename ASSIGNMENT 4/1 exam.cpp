#include<stdio.h>
#include<conio.h>
struct subject // structure definition - child
{ char subj_code[7];
 char subj_title[20];
 float grade;
};
struct student // structure definition - Mother
{ char sname[20];
 struct subject subj[3];
};
main()
{ //clrscr();
 float temp;
 struct student stud_rec;
 int i;
 // Enter student name
 printf("Enter student name: ");
 scanf("\n");
 gets(stud_rec.sname);
 // Enter the 3 subjects in their respective fields
 for (i=0; i<3;i++)
 { printf("\nEnter subject code: ");
 scanf("\n");
 gets(stud_rec.subj[i].subj_code);
 printf("Enter subject title: ");
 scanf("\n");
 gets(stud_rec.subj[i].subj_title);
 printf("Enter grade: ");
 scanf("%f", &temp);
 stud_rec.subj[i].grade = temp;
 }
 //Display structure values
 printf("\n\nGrade report of %s\n\n", stud_rec.sname);
 printf("Subject Code\tSubject Title\t Grade\n\n");
 for (i =0; i<3; i++)
 printf("%s\t\t%s\t %0.2f\n", stud_rec.subj[i].subj_code,
 stud_rec.subj[i].subj_title, stud_rec.subj[i].grade);
 getch();
 return 0;
}

