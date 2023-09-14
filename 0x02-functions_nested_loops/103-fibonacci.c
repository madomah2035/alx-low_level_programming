#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long a = 1, b = 2, sum = 0, temp;

    while (a <= 4000000)
    {
        if (a % 2 == 0)
            sum += a;

        temp = a;
        a = b;
        b += temp;
    }

    printf("%lu\n", sum);

    return (0);
}

