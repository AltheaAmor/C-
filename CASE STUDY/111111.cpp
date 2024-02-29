#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<process.h>

int number, i;
FILE *fptr;

struct employee {
	char empname[15];
	char empnum[10];
	char statcode[2];
	
	int hrswork;
	double bsalary;
	double brate;
	double otpay;
	double othours;
	double otrate;
	double netpay;
	double deduc;
};

struct employee emprec[15];

void otcompu() {
		emprec[i].brate = emprec[i].bsalary / 160;
		emprec[i].otrate = emprec[i].brate * 1.5;
		emprec[i].othours = emprec[i].hrswork - 160;
		emprec[i].otpay = emprec[i].otrate * emprec[i].othours;
}

void regular() {
	
	printf("\n\tEnter Basic Salary: ");
	scanf("%lf", &emprec[i].bsalary);
	
	if(emprec[i].hrswork > 160) {
		
		printf("\n\tThe employee is entitled to an OVERTIME PAY!\n");
		otcompu();
	}
	else {
			emprec[i].bsalary = emprec[i].hrswork * emprec[i].brate;
		}
}

void casual() {
	
	printf("\n\tEnter Basic Rate: ");
	scanf("%lf", &emprec[i].brate);
	
	if(emprec[i].hrswork > 160) {
		printf("\n\tThe employee is entitled to an OVERTIME PAY!\n");
		otcompu();
	}	
	else {
		emprec[i].bsalary = emprec[i].brate * emprec[i].hrswork;
	}
}

void status(char status[]) {
	char regu1[] = {"R"};
	char regu2[] = {"r"};
	char casu1[] = {"C"};
	char casu2[] = {"c"};
	char reglr[] = {"Regular"};
	char casl[] = {"Casual"};
	
	if(strcmp(status, regu1) == 0 || (status, regu2) == 0) {
		strcpy(status, reglr);
	}
	else if(strcmp(status, casu1) == 0 || (status, casu2) == 0){
		strcpy(status, casl);
	}
}

void inputdata() {
	FILE *fptr;
	
	fptr = fopen("employ.txt", "w");
	
	if(fptr == NULL) {
		printf("\t\n[File cannot be created!]");
		exit(1);
	}
	
	printf("\n\t[Enter the number of employee/s]: ");
	scanf("%d", &number);
	
	for(i = 0; i < number; i++) {
		printf("\n\tEnter employee number: ");
		scanf("%s", &emprec[i].empnum);
		
		printf("\n\tEnter employee name: ");
		scanf("%s", &emprec[i].empname);
		
		again:
		printf("\n\tStatus Code [R/C]: ");
		scanf("%s", &emprec[i].statcode);
		
		switch(emprec[i].statcode[0]) {
			case 'R': 
				regular();
				break;
			case 'C':
				casual();
				break;
			default: 
				printf("\n\t[Error]\n\tEnter R or C only!");
				printf("\n\tEnter any key to continue...");
				goto again;
				break;
		}
		
		printf("\n\tHours Worked: ");
		scanf("%d", &emprec[i].hrswork);
		
		printf("\n\tDeductions: ");
		scanf("%lf", &emprec[i].deduc);
		
		fprintf(fptr, "\n\t\tABC COMPANY\n");
		fprintf(fptr, "\t\tMakati City\n");
		fprintf(fptr, "\n\tPayroll\n");
		
		fprintf(fptr, "%15s\t%15s\t15s\t%15s\t%15s\t%15s\t%15s\t%15s", "Employee Number", "Employee Name", "Status Code", "Basic Salary", "Overtime Pay", "Deductions", "Netpay");
		
		emprec[i].netpay = emprec[i].bsalary + emprec[i].otpay - emprec[i].deduc;
		
		status(emprec[i].statcode);
		
		fprintf(fptr, "%15s\t%15s\t%15s\t%15.2lf\t%15.2lf\t%15.2lf\t%15.2lf", emprec[i].empnum, emprec[i].empname, emprec[i].statcode, emprec[i].bsalary, emprec[i].otpay, emprec[i].deduc, emprec[i].netpay);
	}
	fclose(fptr);
}

void display() {
	FILE *fptr;
	
	fptr = fopen("employ.txt", "r");
	if(fptr == NULL) {
		printf("\n\t[File does not exist!]");
		exit(1);
	}
	
	char line[150];
	
	while(!feof(fptr)) {
		fgets(line, 150, fptr);
		fputs(line, stdout);
	}
	fclose(fptr);
}

main() {
	printf("\n\t=================[ WELCOME! ]================\n");
	printf("\n\t=============================================");
	printf("\n\t|              \tGROUP\n                    |\n");  
	printf("\n\t|               \tPayroll\n                 |\n");  
   	printf("\n\t|              \tABC COMPANY\n                |\n");  
		printf("\n\t|                                         |\n");
		printf("\n\t|          \tMakati City\n                |\n");
		printf("\n\t|          \tPayroll\n                    |\n");                   
		printf("\n\t-------------------------------------------\n");
		printf("\t|                                         |\n");
    	printf("\t|                                         |\n");
    	printf("\t|                                         |\n");
    	printf("\t===========================================\n");
	inputdata();
	
	system("cls");
	
	display();
	
return 0;
}
