#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Added for the isdigit() function

struct info {
    int empnum;
    char name[15];
};

int isValidName(const char* name) {
    for (int i = 0; name[i] != '\0'; i++) {
        if (isdigit(name[i])) {
            return 0; // Name contains a digit, not valid
        }
    }
    return 1; // Name is valid
}

int main() {
    FILE* fp;
    struct info emp_rec;

    int n, i, scode;
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

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter employee name: ");
        scanf("%s", emp_rec.name);

        if (!isValidName(emp_rec.name)) {
            printf("Invalid employee name. Only alphabetic characters are allowed.\n");
            i--; // Retry input for this employee
            continue;
        }

        printf("Enter employee number: ");
        scanf("%d", &emp_rec.empnum);
        printf("EMPLOYEE'S STATUS CODE:\n");
        printf("1. R = Regular\n");
        printf("2. C = Casual\n");
        printf("\nEnter your status code (1 or 2): ");
        scanf("%d", &scode);

        if (scode == 1) {
            printf("\nEnter your basic salary: ");
            scanf("%f", &bsalary);
            printf("Enter hours worked: ");
            scanf("%f", &hoursWorked);

            brate = bsalary / 160;
            printf("Basic rate: %0.2f\n", brate);

            if (hoursWorked > 160) {
                temp = brate / 2;
                otrate = brate + temp;
                othours = hoursWorked - 160;
                otpay = otrate * othours;

                printf("Overtime pay: %0.2f\n", otpay);
            }

            printf("\nEnter deductions: ");
            scanf("%f", &deduct);

            float netpay = bsalary + otpay - deduct;
            printf("Netpay: %.2f\n", netpay);

            // Display output in desired format
            printf("\n\t\t\t\t\t\t\t\tABC COMPANY\n");
            printf("\n\t\t\t\t\t\t\t\tMakati City\n");
            printf("\n\t\t\t\t\t\t\t\tPayroll\n\n");
            printf(" Employee Number\t\tEmployee Name\t\tStatus\t\tBasic Salary\t\tOvertime\tDeductions\tNet Pay\n");
            printf("\n");
            printf("%10d\t\t%15s\t\tRegular\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n", emp_rec.empnum, emp_rec.name, bsalary, otpay, deduct, netpay);
        }

        if (scode == 2) {
            printf("\nEnter your basic rate: ");
            scanf("%f", &brate);
            printf("Enter hours worked: ");
            scanf("%f", &hoursWorked);

            bsalary = hoursWorked * brate;
            printf("Basic salary: %0.2f\n", bsalary);

            if (hoursWorked > 160) {
                temp = brate / 2;
                otrate = brate + temp;
                othours = hoursWorked - 160;
                otpay = otrate * othours;

                printf("\nOvertime pay: %0.2f\n", otpay);
            }

            printf("\nEnter deductions: ");
            scanf("%f", &deduct);

            float netpay = bsalary + otpay - deduct;
            printf("Netpay: %.2f\n", netpay);

            // Display output in desired format
            printf("\nABC COMPANY\n");
            printf("Makati City\n");
            printf("\nPayroll\n\n");
            printf("  Employee\t\tEmployee\tStatus\t\tBasic\t\tOvertime\tDeductions\tNet\n");
            printf("  Number\t\tName\t\tSalary\t\tPay\t\tPay\n");
            printf("\n");
            printf("%10d\t%15s\tCasual\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n", emp_rec.empnum, emp_rec.name, bsalary, otpay, deduct, netpay);
        }
    }

    fclose(fp);
    return 0;
}
