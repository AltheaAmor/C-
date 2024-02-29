#include<stdio.h>

int gcd(int a, int b){
    if(b == 0) {
        return a;
    } else {
        return gcd(b , a % b); 
    }
}
   
int main() { 
    int c, d, f;
    while(1) {
        printf("Enter a number(Enter 0 to exit): \n ");
        scanf("%d  %d", &c,  &d);
        if (c,d == 0){
            break; 
        }
        f = gcd(c, d); 
        printf("The GCD of %d and %d is %d.\n\n\n", c , d, f);
    }
    return 0;
}
