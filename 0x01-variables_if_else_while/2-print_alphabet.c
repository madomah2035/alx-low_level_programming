#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	do 
	{
		putchar(alphabet[i]);
		putchar('\n');
		i++;
	}
	while (alphabet[i] != '\0');

	return (0);	
}
