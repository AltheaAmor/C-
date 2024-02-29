#include <iostream>

int main()
{
    int dw = 2452; //bucketSize
    int dl = 162; //leakRate  
    int cd = 28; // catDrink 
    int hour = 0;
    int drops = 0;
    int tcd = 0;   //totalCatDrink

    while (drops < dw)
    {
        printf("HOUR/S  DROPS\n");
		printf("%2d %10d%11d\n\n", hour, drops);

        drops += dl;
        hour++;

        if (hour % 3 == 0)
        {
            drops -= cd;
            tcd += cd;
        }
    }
     printf("\nThe bucket will be filled in %d hours\n", hour);
    printf("\nThe cat drank %d drops of wine.", tcd);
    return 0;
}

