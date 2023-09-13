#include "main.h"
/**
 * print_alphabet - prints all the alphabets using the _putchar function
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';
	
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	
	_putchar('\n');
}
