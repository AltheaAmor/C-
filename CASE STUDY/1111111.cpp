#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> // strcmp function

struct info {
    char empnum[15];
    char name[15];
};

int ValidName(const char* name) {
    for (int i = 0; name[i] != '\0'; i++) {
        if (isdigit(name[i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    FILE* fp;
    struct info emp_rec;

    int n, i;
    char scode;
    float hoursWorked, othours;
    float brate, otrate, temp;
    float bsalary;
    float otpay;
    float deduct;

    fp = fopen("empl.txt", "a");

    if (fp == NULL) {
        printf("File cannot be created!");
        exit(1);
    }

    printf("\t\t\t\t\t\t---------- WELCOME! ----------\n\n \t\t\t\tTo utilize our program, you can provide input and data to the program.\n");

    do {//checks if the user will input invalid characters.
        printf("\n\t\t\t\t\t\tEnter the number of employees: ");
        if (scanf("%d", &n) != 1 || n <= 0) {
            printf("\n\t\t\t\t\t\tInvalid input! Please enter a positive number.\n");
            fflush(stdin);
        }
    } while (n <= 0);

    for (i = 0; i < n; i++) { // checks if the user will put invalid inputs.
        int validName = 0;

        while (!validName) {
            printf("\n\t\t\t\t\t\tEnter employee name: ");
            scanf("%s", emp_rec.name);

            if (!ValidName(emp_rec.name)) {
                printf("\n\t\t\t\t\t\tInvalid employee name!\n\t\t\t\t\t\tOnly alphabetic characters are allowed.\n");
            } else {
                validName = 1; // allowing the program to move forward
            }
        }

        while (1) {
            printf("\n\t\t\t\t\t\tEnter employee number: ");
            scanf("%s", emp_rec.empnum);

            int isValidNumber = 1;
            for (int j = 0; emp_rec.empnum[j] != '\0'; j++) {
                if (!isdigit(emp_rec.empnum[j])) {
                    isValidNumber = 0;
                    break;
                }
            }

            if (isValidNumber) {
                break;
            } else {
                printf("\n\t\t\t\t\t\tInvalid employee number! Please enter a numeric value.\n");
            }
        }

        printf("\n\t\t\t\t\t\tEMPLOYEE'S STATUS CODE:\n");
        printf("\n\t\t\t\t\t\t\t1. R = Regular\n");
        printf("\n\t\t\t\t\t\t\t2. C = Casual\n");

        int validCode = 0;

        while (!validCode) { // checks if the user inputs only 1 or 2
            printf("\n\t\t\t\t\t\tEnter your status code (1 or 2): ");
            scanf(" %c", &scode);

            if (scode == '1' || scode == '2') { // the scode compares the character 1 or 2 if the user inputs a different key
                validCode = 1; // allowing the program to move forward in the execution flow.
            } else {
                printf("\n\t\t\t\t\t\tInvalid status code! Please enter '1' or '2' only.\n"); // the program will display this.
            }
        }

        if (scode == '1') {
            printf("\n\t\t\t\t\t\tEnter your basic salary: ");
            scanf("%f", &bsalary);
            printf("\n\t\t\t\t\t\tEnter hours worked: ");
            scanf("%f", &hoursWorked);

            brate = bsalary / 160;
            printf("\n\t\t\t\t\t\tBasic rate: %0.2f\n", brate);

            if (hoursWorked > 160) { // computation
                temp = brate / 2;
                otrate = brate + temp;
                othours = hoursWorked - 160;
                otpay = otrate * othours;

                printf("\n\t\t\t\t\t\tOvertime pay: %0.2f\n", otpay);
            }

            printf("\n\t\t\t\t\t\tEnter deductions: ");
            scanf("%f", &deduct);

            float netpay = bsalary + otpay - deduct; // computation
            printf("\n\t\t\t\t\t\tNetpay: %.2f\n", netpay);

            char choice[10]; // declares a character array named choice with a size of 10. This array is used to store the user's choice of whether they want to see their records or not.
            printf("\n\t\t\t\t\tWould you like to see your records? (Y/N): ");
            scanf("%s", choice);

            if (strcmp(choice, "Y") == 0) { // comparing the character (yes or no)
                system("cls");
                printf("\t\t\t\t\t----------------------------------------------");
                printf("\n\t\t\t\t\t\t\tNPA-I COMPANY\n");
                printf("\t\t\t\t\t----------------------------------------------");
                printf("\n\t\t\t\t\t\t\tPUPQC BRANCH\n");
                printf("\n\t\t\t\t\t\t\tPayroll\n\n");
                printf("Employee Number\t\tEmployee Name\t\tStatus\t\tBasic Salary\t\tOvertime\tDeductions\tNet Pay\n");
                printf("\n");
                printf("%-15s\t\t%-15s\t\tRegular\t\t%15.2f\t%15.2f\t%15.2f\t%15.2f\n", emp_rec.empnum, emp_rec.name, bsalary, otpay, deduct, netpay);
                printf("\t\t\t---------------------------------------------------------------------------\n");
            } else if (strcmp(choice, "N") == 0) {
                // Do something else or continue with the program
            } else {
                printf("\nInvalid choice!\n");
            }
        } else if (scode == '2') {
            printf("\n\t\t\t\t\t\tEnter your basic rate: ");
            scanf("%f", &brate);
            printf("\n\t\t\t\t\t\tEnter hours worked: ");
            scanf("%f", &hoursWorked);

            bsalary = hoursWorked * brate;
            printf("\n\t\t\t\t\t\tBasic salary: %0.2f\n", bsalary);

            if (hoursWorked > 160) {
                temp = brate / 2;
                otrate = brate + temp;
                othours = hoursWorked - 160;
                otpay = otrate * othours;

                printf("\n\t\t\t\t\t\tOvertime pay: %0.2f\n", otpay);
            }

            printf("\n\t\t\t\t\t\tEnter deductions: ");
            scanf("%f", &deduct);

            float netpay = bsalary + otpay - deduct;
            printf("\n\t\t\t\t\t\tNetpay: %.2f\n", netpay);

            char choice[10];
            printf("\n\t\t\t\t\tWould you like to see your records? (Y/N): ");
            scanf("%s", choice);

            if (strcmp(choice, "Y") == 0) {

                system("cls");
                printf("\n\t\t\t\t\t\t\tNPA-I COMPANY\n");
                printf("\n\t\t\t\t\t\t\tPUPQC BRANCH\n");
                printf("\n\t\t\t\t\t\t\tPayroll\n\n");
                printf("Employee Number\tEmployee Name\tStatus\t\tBasic Salary\t\tOvertime\tDeductions\tNet Pay\n");
                printf("\n");
                printf("%-15s\t\t%-15s\tRegular\t\t%15.2f\t%15.2f\t%15.2f\t%15.2f\n", emp_rec.empnum, emp_rec.name, bsalary, otpay, deduct, netpay);

            } else if (strcmp(choice, "N") == 0) {
                // Do something else or continue with the program
            } else {
                printf("\nInvalid choice!\n");
            }
        }
    }

    fclose(fp);
    return 0;
}

int main() {
    printf("\n\t=================[ WELCOME! ]================\n");
    printf("\n\t=============================================");
    printf("\n\t|                                         |");
    printf("\n\t|                ABC COMPANY              |");
    printf("\n\t|                                         |");
    printf("\n\t|                Makati City              |");
    printf("\n\t|                  Payroll                |");
    printf("\n\t-------------------------------------------\n");
    printf("\t|                                         |\n");
    printf("\t|                                         |\n");
    printf("\t|                                         |\n");
    printf("\t===========================================\n");

    create();

    system("cls");

    display();

    return 0;
