#include <stdio.h>
#include <windows.h>

int main() {
    printf("\033[31mRED TEXT \003[0m"); // Set background color to red
    printf("This has a red background.\n");
    printf("\033[42m"); // Set background color to green
    printf("This has a green background.\n");
    printf("\033[43m"); // Set background color to yellow
    printf("This has a yellow background.\n");
    printf("\033[44m"); // Set background color to blue
    printf("This has a blue background.\n");
    printf("\033[45m"); // Set background color to magenta
    printf("This has a magenta background.\n");
    printf("\033[46m"); // Set background color to cyan
    printf("This has a cyan background.\n");
    printf("\033[47m"); // Set background color to white
    printf("This has a white background.\n");
    printf("\033[0m"); // Reset color back to default
    return 0;
} 
