#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets in lowercase 10 times
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	while (i < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
		i++;
	}
}
