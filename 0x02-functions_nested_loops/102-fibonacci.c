#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long a = 1, b = 2, next;
    int count;

    printf("%lu, %lu, ", a, b);

    for (count = 3; count <= 50; count++)
    {
        next = a + b;
        printf("%lu", next);

        if (count < 50)
            printf(", ");

        a = b;
        b = next;
    }

    printf("\n");

    return (0);
}

