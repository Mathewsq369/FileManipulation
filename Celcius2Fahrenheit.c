#include <stdio.h>

int main()
{
    double celcius, fahrenheit = 0;
    unsigned int repeat;

    do
    {
        repeat = 0;
        
        printf("\nInput temperature in degrees Celcius: ");
        scanf("%lf",&celcius);

        fahrenheit = (((float)9 / 5) * celcius) + 32;
        printf("Celcius\t\t\tFahrenheit\n");
        printf("%7.3lf%26.3lf\n\n",celcius , fahrenheit);

        while (repeat != 1 && repeat != 2)
        {
            printf("Perform another calculation? (input 1 for yes or 2 for No)> ");
            scanf("%u",&repeat);

            if (repeat != 1 && repeat != 2)
            {
                printf("Wrong input!\n\n");
            }
            else if (repeat == 2)
            {
                printf("Thank you for using the program!\n\n");
            }
        }


    } while(repeat == 1);
}    