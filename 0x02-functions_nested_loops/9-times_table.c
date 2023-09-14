#include "main.h"
/**
 * times_table - prints the times table starting from 0
 *
 * Return: returns nothing
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            result = i * j;

            if (result < 10)
            {
                _putchar('0' + result); /* Print single-digit result */
            }
            else
            {
                _putchar('0' + result / 10); /* Print tens digit */
                _putchar('0' + result % 10); /* Print ones digit */
            }

            if (j < 9)
            {
                _putchar(','); /* Print a comma to separate columns */
                _putchar(' '); /* Print a space for formatting */
            }
        }
        _putchar('\n');
    }
}
