#include <stdio.h>
#include <math.h>

int main()
{
    int limit, s_cube = 0;
    int s_num = 0;
    int s_square = 0;
    int count = 1;

    printf("\nThis program prints the sum of natural numbers, sum of their squares and sum of their cubes\n\n");

    do
    {
        printf("Input a limit: ");
        scanf("%i", &limit);

        if (limit < 1)
        {
            printf("Invalid input\n");
        }
    } while(limit < 1);

    while(count <= limit)
    {
        s_num += count;
        s_square += pow(count, 2);
        s_cube += pow(count, 3);
        count++;
    }

    printf("The sum of Natural numbers to the limit %i is %i\n",limit,s_num);
    printf("The sum of squares of Natural numbers to the limit %i is %i\n",limit,s_square);
    printf("The sum of cubes of Natural numbers to the limit %i is %i\n",limit,s_cube);
    return 0;
}