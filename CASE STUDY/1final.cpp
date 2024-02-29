#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int number, i;
FILE* fptr;

struct employee {
    char empname[15];
    char empnum[10];
    char statcode[8]; // Increased size to accommodate "Regular" and "Casual"
    int hrswork;
    double bsalary;
    double brate;
    double halfbrate;
    double otpay;
    double othours;
    double otrate;
    double netpay;
    double deduc;
};

struct employee emprec[15];

void input() {
    printf("\n\tEnter employee number: ");
    scanf("%s", emprec[i].empnum);

    printf("\n\tEnter employee name: ");
    scanf(" %[^\n]s", emprec[i].empname);

    printf("\n\tEnter status code [R/C]: ");
    scanf(" %s", emprec[i].statcode);

    printf("\n\tHours Worked: ");
    scanf("%d", &emprec[i].hrswork);

    printf("\n\tDeductions: ");
    scanf("%lf", &emprec[i].deduc);
}

void otcompu() {
    emprec[i].halfbrate = emprec[i].brate / 2;
    emprec[i].otrate = emprec[i].brate + emprec[i].halfbrate;
    emprec[i].othours = emprec[i].hrswork - 160;
    emprec[i].otpay = emprec[i].otrate * emprec[i].othours;
}

void regular() {
    input();
    printf("\n\tEnter Basic Salary: ");
    scanf("%lf", &emprec[i].bsalary);

    if (emprec[i].hrswork > 160) {
        printf("\n\n\tThe employee is entitled to OVERTIME PAY!\n");
        emprec[i].brate = emprec[i].bsalary / 160;
        otcompu();
    } else {
        emprec[i].bsalary = emprec[i].brate * emprec[i].hrswork;
    }
}

void casual() {
    input();
    printf("\n\tEnter Basic Rate: ");
    scanf("%lf", &emprec[i].brate);

    if (emprec[i].hrswork > 160) {
        printf("\n\tThe employee is entitled to OVERTIME PAY!\n");
        otcompu();
    } else {
        emprec[i].bsalary = emprec[i].brate * emprec[i].hrswork;
    }
}

void create() {
    char sc;
    int ex;

    fptr = fopen("employ.txt", "w");

    if (fptr == NULL) {
        printf("\n\t[File cannot be created!]");
        exit(1);
    }

    printf("\n\t[Enter the number of employees]: ");
    scanf("%d", &number);

    for (i = 0; i < number; i++) {
        ex = 0;
        while (ex == 0) {
            printf("\n\t==========[STATUS CODE]=========\n");
            printf("\n\t|                              |");
            printf("\n\t|   [ R ] - Regular            |");
            printf("\n\t|   [ C ] - Casual             |");
            printf("\n\t|                              |");
            printf("\n\t================================\n");

            again:
            printf("\n\t   [Enter status code of employee %d (R/C)]: ", i + 1);
            scanf(" %c", &sc);

            switch (sc) {
                case 'R':
                case 'r':
                    strcpy(emprec[i].statcode, "Regular");
                    regular();
                    ex = 1;
                    break;
                case 'C':
                case 'c':
                    strcpy(emprec[i].statcode, "Casual");
                    casual();
                    ex = 1;
                    break;
                default:
                    printf("\n\t[Invalid Input!]\n\tEnter R or C only! Press any key to continue...");
                    getch();
                    goto again;
                    break;
            }
        }

        fprintf(fptr, "\n\t\tABC COMPANY\n");
        fprintf(fptr, "\t\tMakati City\n");
        fprintf(fptr, "\n\tPayroll\n");

        fprintf(fptr, "%15s\t%15s\t%15s\t%15s\t%15s\t%15s\t%15s\t%15s", "Employee Number", "Employee Name", "Status Code", "Basic Salary", "Overtime Pay", "Deductions", "Net Pay");

        emprec[i].netpay = emprec[i].bsalary + emprec[i].otpay - emprec[i].deduc;

        fprintf(fptr, "%15s\t%15s\t%15s\t%15.2lf\t%15.2lf\t%15.2lf\t%15.2lf\n", emprec[i].empnum, emprec[i].empname, emprec[i].statcode, emprec[i].bsalary, emprec[i].otpay, emprec[i].deduc, emprec[i].netpay);
    }

    fclose(fptr);
}

void display() {
    fptr = fopen("employ.txt", "r");

    if (fptr == NULL) {
        printf("\n\t[File does not exist!]");
        exit(1);
    }

    for (i = 0; i < number; i++) {
        fscanf(fptr, "%15s\t%15s\t%15s\t%15lf\t%15lf\t%15lf\t%15lf\n", emprec[i].empnum, emprec[i].empname, emprec[i].statcode, &emprec[i].bsalary, &emprec[i].otpay, &emprec[i].deduc, &emprec[i].netpay);

        printf("%15s\t%15s\t%15s\t%15.2lf\t%15.2lf\t%15.2lf\t%15.2lf\n", emprec[i].empnum, emprec[i].empname, emprec[i].statcode, emprec[i].bsalary, emprec[i].otpay, emprec[i].deduc, emprec[i].netpay);
    }
    fclose(fptr);
}

void append() {
    char sc;
    int ex;

    fptr = fopen("employ.txt", "a"); // Changed the file mode to "a" for append

    if (fptr == NULL) {
        printf("\n\t[File cannot be opened!]");
        exit(1);
    }

    display();

    printf("\n\t==========[You are appending!]==========");
    printf("\n\n\t[Enter the number of employees]: ");
    scanf("%d", &number);

    for (i = 0; i < number; i++) {
        ex = 0;
        while (ex == 0) {
            printf("\n\t==========[STATUS CODE]=========\n");
            printf("\n\t|                              |");
            printf("\n\t|   [ R ] - Regular            |");
            printf("\n\t|   [ C ] - Casual             |");
            printf("\n\t|                              |");
            printf("\n\t================================\n");

            again:
            printf("\n\t   [Enter status code of employee %d (R/C)]: ", i + 1);
            scanf(" %c", &sc);

            switch (sc) {
                case 'R':
                case 'r':
                    strcpy(emprec[i].statcode, "Regular");
                    regular();
                    ex = 1;
                    break;
                case 'C':
                case 'c':
                    strcpy(emprec[i].statcode, "Casual");
                    casual();
                    ex = 1;
                    break;
                default:
                    printf("\n\t[Invalid Input!]\n\tEnter R or C only! Press any key to continue...");
                    getch();
                    goto again;
                    break;
            }
        }

        fprintf(fptr, "\n\t\tABC COMPANY\n");
        fprintf(fptr, "\t\tMakati City\n");
        fprintf(fptr, "\n\tPayroll\n");

        fprintf(fptr, "%15s\t%15s\t%15s\t%15s\t%15s\t%15s\t%15s\t%15s", "Employee Number", "Employee Name", "Status Code", "Basic Salary", "Overtime Pay", "Deductions", "Net Pay");

        emprec[i].netpay = emprec[i].bsalary + emprec[i].otpay - emprec[i].deduc;

        fprintf(fptr, "%15s\t%15s\t%15s\t%15.2lf\t%15.2lf\t%15.2lf\t%15.2lf\n", emprec[i].empnum, emprec[i].empname, emprec[i].statcode, emprec[i].bsalary, emprec[i].otpay, emprec[i].deduc, emprec[i].netpay);
    }

    fclose(fptr);
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
}

