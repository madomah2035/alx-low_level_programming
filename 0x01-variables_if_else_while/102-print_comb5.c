#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * Numbers range from 0 to 99.
 * The two numbers are separated by a space.
 * All numbers are printed with two digits (e.g., 01, 02).
 * Combinations are separated by a comma and a space.
 * Combinations are printed in ascending order.
 * 00 01 and 01 00 are considered the same combination.
 * You can only use the putchar function (no other functions allowed).
 * You can only use putchar eight times maximum in your code.
 * Do not use variables of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens1, ones1, tens2, ones2;

	for (tens1 = 0; tens1 <= 9; tens1++)
	{
		for (ones1 = 0; ones1 <= 9; ones1++)
		{
			for (tens2 = tens1; tens2 <= 9; tens2++)
			{
				int start = (tens1 == tens2) ? ones1 + 1 : 0;
				for (ones2 = start; ones2 <= 9; ones2++)
				{
					putchar(tens1 + '0');
					putchar(ones1 + '0');
					putchar(' ');
					putchar(tens2 + '0');
					putchar(ones2 + '0');

					if (!(tens1 == 9 && ones1 == 8 && tens2 == 9 && ones2 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
