#include<stdio.h>
#include<conio.h>
#include<string.h>

#define lop 25
// length of the password
#define mt 3
// maximum of tries

int main() { 
       char pasw[lop + 1]; 
       char email[lop + 1];
       int b;  
       // b try
       
      // for( ){
      // 	printf("\nEnter the password:  ");
	 //  }
    
       printf("\n*****PUP WEBSITE*****\n\n");
       printf("Enter user name: ");
       	fgets(email , lop, stdin); 
    	email[strcspn(email, "\n")] = '\0';
       
    for (b = 0; b < mt; b++) {	
       	printf("\nEnter password:  ");
        int a = 0;
         while(a < lop && (pasw[a] = getch()) != '\r') { // read password char by char
                printf("*"); // print asterisk for each character
                a++;
            }
            pasw[a] = '\0'; 
       // while (a < lop && (pasw[a] = getch()) != '\r' )//read password 
       //   printf("*");
       //   a++; 
    //  }
      
     // pasw[a] = '\0'; //to end the password string
      
    	
    	 if (strcmp(pasw, "althea123") == 0){
        	printf("\n^^^^Welcome to PUP Quezon City!^^^^^\n");
        	return 0; 
        } else{
		  	    printf("\nIncorrect password.\n Please try again\n");
		  }
		   memset(pasw, 0 , lop + 1 );
	}
    printf("\nIntruder Alert! \n"); 
    return 0;
}
