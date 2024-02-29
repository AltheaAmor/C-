#include<stdio.h>
#include<conio.h>
struct record // Structure definition
{ char name[20];
 int age;
};
struct record stud_rec; // Structure declaration
main()
{// clrscr();
 printf("Enter student name: ");
 gets(stud_rec.name);
 printf("Enter student age: ");
 scanf("%d", &stud_rec.age);
 printf("%s is %d years old\n", stud_rec.name, stud_rec.age);
 getch(); return 0;
}
