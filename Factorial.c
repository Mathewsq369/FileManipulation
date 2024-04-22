#include <stdio.h>

int main()
{
    int num =  0;
    int factorial = 1;

    printf("This program calculates the factorial of numbers\n");
    printf("Input a number: ");
    scanf("%i",&num);

    while(num > 0)
    {
        factorial *= num;
        num--;
    }

    printf("%i factorial is equal to: %i\n");
    return 0;
}