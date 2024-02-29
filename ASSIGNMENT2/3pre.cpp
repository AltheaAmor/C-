#include<stdio.h>
#include<string.h>
#include<conio.h>

#define lop 25
// length of the password
#define mt 3
// maximum of tries

int main() { 
       char pasw[lop + 1]; 
       char email[lop + 1];
       int b;
       
       printf("\n*****FACEBOOK*****\n\n");
       printf("Enter Email Address: ");
       fgets(email , lop, stdin); 
       email[strcspn(email, "\n")] = '\0';
    
       for (b = 0; b < mt; b++) {   
            printf("\nEnter the password:  ");
            int i = 0;
            while(i < lop && (pasw[i] = getch()) != '\r') { // read password char by char
                printf("*"); // print asterisk for each character
                i++;
            }
            pasw[i] = '\0'; // add null terminator to end the password string
            
            if (strcmp(pasw, "althea123") == 0){
                printf("\n^^^^Welcome to PUP Quezon City!^^^^^\n");
                return 0; 
            } else {
                printf("\nIncorrect password. Please try again.\n");
            }  
            memset(pasw, 0 , lop + 1 );
        }
    printf("\nIntruder Alert! \n"); 
    return 0;
}
