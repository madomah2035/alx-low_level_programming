#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexdec[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hexdec[i]);
	}

	putchar('\n');

	return (0);
}
