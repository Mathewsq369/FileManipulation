#include <stdio.h>

int main()
{
    int limit;
    unsigned int count;
    printf("\nThis program calculates multiples of 7 to a specified limit\n");

    do
    {
        limit, count = 7;
        printf("Enter a limit(0 to exit): ");
        scanf("%i",&limit);

        if (limit >= 7)
        {
            printf("Multiples divisible by 7 up to the limit %i are:\n\n", limit);
        }
        else if (limit < 7 && limit > 0)
        {
            printf("There are no multiples divisible by 7 up to the limit %i\n\n", limit);
        }
        else
        {
            printf("Invalid input!\n\n");
        }

        while(limit >= 7 && count <= limit)
        {
            if (count % 7 == 0 || 7 % count == 0)
            {
                printf("%i ", count);
            }
            count++;
        }

        printf("\n\ninput 0 to exit!> ");
        scanf("%i",&limit);
    }while (limit != 0);
}