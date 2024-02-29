#include<stdio.h>
int main(){
        int x,y;
        printf("Enter value for x :");
        scanf("%d",&x);
        printf("\nEnter value for y :");
        scanf("%d",&y);
        if ( x > y ){
                printf("X is large number - %d\n",x);
        }
        else{
                printf("Y is large number - %d\n",y);
        }
        return 0;
}

printf("%0.2f", sqrt(25.00) + abs(-10)/floor(2.5) * fmod(25.00, 7.00));
