#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the parameter to be checked
 * Return: returns 0, 1 and -1 if number is 0, pos and neg respectively
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
