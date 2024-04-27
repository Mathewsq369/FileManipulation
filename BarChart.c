#include <stdio.h>

int main()
{
    int num, val = 0;
    int num1 = 0;

    printf("Enter number of entries: ");
    scanf("%i",&num);

    do
    {
        printf("Enter number: ");
        scanf("%i", &num1);

        for (int i = 0; i < num1; i++)
        {
            printf("*");
        }
        printf("\n");
        val++;
    } while (val < num);
}