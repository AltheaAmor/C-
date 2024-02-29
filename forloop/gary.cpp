#include<stdio.h>

int main() {
    int hb;
    int pcs = 12; // hamburgers per 2 minutes
    int time, hours, mins;
    while (1) {
    	 printf("How many hamburgers: ");
         scanf("%d" ,&hb);
         if(hb<=0){
             printf("\nInvalid input, please enter a positive value!");
         }
         else {
             time = (hb / pcs) * 2;
             hours = time / 60; // convert minutes to hours
             mins = time % 60; // calculate remaining minutes
             printf("\nIt will take Gary %d hours %d minutes to deliver %d hamburgers." ,hours, mins,hb);
             break;
         }
    }
    return 0;
}

