#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int number, i;
FILE* fptr;

struct employee {
    char empname[15];
    char empnum[10];
    char statcode[8];
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

struct employee emprec[15]; // Array to store employee records

int ValidName(const char* name) {
    for (int i = 0; name[i] != '\0'; i++) {
        if (isdigit(name[i])) {
            return 0;
        }
    }
    return 1;
}

void input() {
    printf("\n\tEnter employee number: ");
    scanf("%s", emprec[i].empnum);

	again:
    printf("\n\tEnter employee name: ");
    scanf("\n");
    scanf("%[^\n]s", emprec[i].empname);
    	
    	int validName = 0;
    	if (!ValidName(emprec[i].empname)) {
                printf("\n\tInvalid employee name!\n\tOnly alphabetic characters are allowed.\n");
                goto again;
            } else {
                validName = 1; // allowing the program to move forward
            }
    

    printf("\n\tHours Worked: ");
    scanf("%d", &emprec[i].hrswork);

    printf("\n\tDeductions: ");
    scanf("%lf", &emprec[i].deduc);
    
    printf("\n\tStatus Code [R/C]: %s ", emprec[i].statcode);
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

    fptr = fopen("employ.txt", "w"); // Open file in write mode

	system("cls");
    if (fptr == NULL) {
        printf("\n\t[File cannot be created!]");
        exit(1);
    }

    do {
    	printf("\n\t==========[ YOU ARE CREATING ]==========");
        printf("\n\tEnter the number of employees you will input: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("\n\tInvalid input! Please enter a positive number.\n");
            fflush(stdin);
        }
    } while (number <= 0);

    printf("\n\t==========[STATUS CODE]=========\n");
    printf("\n\t|                              |");
    printf("\n\t|   [ R ] - Regular            |");
    printf("\n\t|   [ C ] - Casual             |");
    printf("\n\t|                              |");
    printf("\n\t================================\n");
    
        fprintf(fptr, "\n\t\tABC COMPANY\n");
        fprintf(fptr, "\t\tMakati City\n");
        fprintf(fptr, "\n\t\tPayroll\n\n");

        fprintf(fptr, "\n\t   %15s\t%15s\t%15s\t%15s\t%15s\t%15s\t%15s            \n", "Employee Number", "Employee Name", "Status Code", "Basic Salary", "Overtime Pay", "Deductions", "Net Pay" );
	    
    for (i = 0; i < number; i++) {
        ex = 0;
        while (ex == 0) {
            again:
            printf("\n\t[Enter status code of employee %d (R/C)]: ", i + 1);
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
                    printf("\n");
                    goto again;
                    break;
            }
        }

        

        emprec[i].netpay = emprec[i].bsalary + emprec[i].otpay - emprec[i].deduc;

        fprintf(fptr, "\n\t%15s\t%15s\t%15s\t%15.2lf\t%15.2lf\t%15.2lf\t%15.2lf", emprec[i].empnum, emprec[i].empname, emprec[i].statcode, emprec[i].bsalary, emprec[i].otpay, emprec[i].deduc, emprec[i].netpay);
    }

    fclose(fptr); // Close the file

    printf("\n\n\t==========[You have successfully created employees' record!]=========");
    printf("\n\tPress any key to return to the main menu...");
    getch();
    return;
}



void display() {
    fptr = fopen("employ.txt", "r"); // Open file in read mode

	system("cls");
    if (fptr == NULL) {
        printf("\n\t[File does not exist!]");
        exit(1);
    }
    
    printf("\n\t=========================================================[ ABC COMPANY ]===========================================================");
    printf("\n\t|                                                          Makati City                                                            |");
    printf("\n\t|                                                            Payroll                                                              |");
    printf("\n\t===================================================================================================================================\n");
     
     
   
  

    char line[150];
    int skipLines = 6; // Number of lines to skip before printing employee records

    while (fgets(line, sizeof(line), fptr) != NULL) {
        // Skip the lines containing ABC COMPANY, Makati City, and Payroll
        if (skipLines > 0) {
            skipLines--;
            continue;
        }

        // Trim leading and trailing whitespace
        char* trimmedLine = line;
        size_t len = strlen(trimmedLine);
        if (len > 0 && trimmedLine[len - 1] == '\n') {
            trimmedLine[len - 1] = '\0';
        }

        // Print employee records
        printf("%s\n", trimmedLine);
    }

    fclose(fptr); // Close the file

    getch();
    return;
}


void append() {
    char sc;
    int ex;

    fptr = fopen("employ.txt", "a"); // Open file in append mode

	system("cls");
    if (fptr == NULL) {
        printf("\n\t[File cannot be created!]");
        exit(1);
    }
    
    printf("\n\t==========[ YOU ARE APPENDING ]==========");

    do {
        printf("\n\tEnter the number of employees you will input: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("\n\tInvalid input! Please enter a positive number.\n");
            fflush(stdin);
        }
    } while (number <= 0);

    printf("\n\t==========[STATUS CODE]=========\n");
    printf("\n\t|                              |");
    printf("\n\t|   [ R ] - Regular            |");
    printf("\n\t|   [ C ] - Casual             |");
    printf("\n\t|                              |");
    printf("\n\t================================\n");

    for (i = 0; i < number; i++) {
        ex = 0;
        while (ex == 0) {
            again:
            printf("\n\t[Enter status code of employee %d (R/C)]: ", i + 1);
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

        emprec[i].netpay = emprec[i].bsalary + emprec[i].otpay - emprec[i].deduc;

        fprintf(fptr, "\n\t%15s\t%15s\t%15s\t%15.2lf\t%15.2lf\t%15.2lf\t%15.2lf\n", emprec[i].empnum, emprec[i].empname, emprec[i].statcode, emprec[i].bsalary, emprec[i].otpay, emprec[i].deduc, emprec[i].netpay);
    }

    fclose(fptr); // Close the file

    printf("\n\n\t==========[You have successfully appended employees' record!]=========");
    printf("\n\tPress any key to return to the main menu...");
    getch();
    return;
}



int main() {
    int choice;
    int close;

	close = 0;
    while (close == 0) {
		system("cls");
	    printf("\n\t=================[ WELCOME! ]================\n");
	    printf("\n\t=============================================");
	    printf("\n\t|                                           |");
	    printf("\n\t|   [ 1 ] Create                            |");
	    printf("\n\t|   [ 2 ] Display                           |");
	    printf("\n\t|   [ 3 ] Append                            |");
	    printf("\n\t|   [ 4 ] Exit                              |");
	    printf("\n\t|                                           |");
	    printf("\n\t=============================================\n");

    
        ulitpar:
        printf("\n\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create(); // Create employee records
                break;
            case 2:
                display(); // Display employee records
                break;
            case 3:
                append(); // Append employee records
                break;
            case 4:
                close = 1; // Exit the program
                break;
            default:
                printf("\n\tPlease enter 1-4 only! Press any key to continue...");
                getch();
                goto ulitpar;
                break;
        }
    }

    return 0;
}

