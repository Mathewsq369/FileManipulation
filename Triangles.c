#include <stdio.h>

int main()
{
    int size = 0;

    printf("\nThis program displays triangles of given sizes\n");
    printf("Enter the size of triangles: ");
    scanf("%i",&size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = size; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = size; i > 0; i--)
    {
        for (int j = size; j > 0; j--)
        {
            if (j > i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= size; i++)
    {
        for (int j = size; j > 0; j--)
        {
            if (j > i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}