#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 * Numbers are separated by a comma and a space.
 * The three digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1, and 2.
 * Prints only the smallest combination of three digits.
 * Numbers are printed in ascending order, with three digits.
 * You can only use the putchar function (no other functions allowed).
 * You can only use putchar six times maximum in your code.
 * Do not use variables of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				putchar(digit1 + '0'); /* Print the first digit */
				putchar(digit2 + '0'); /* Print the second digit */
				putchar(digit3 + '0'); /* Print the third digit */

				if (!(digit1 == 7 && digit2 == 8 && digit3 == 9))
				{
					putchar(','); /* Print a comma */
					putchar(' '); /* Print a space */
				}
			}
		}
	}

	putchar('\n'); /* Print a newline */

	return (0);
}
