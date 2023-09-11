#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	do {
		putchar(alpha[i]);
		i++;
	} while (alpha[i] != '\0');

	putchar('\n');

	return (0);
}
