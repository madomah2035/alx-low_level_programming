#include "main.h"
/**
 * print_last_digit - prints last digit of a num
 * @n: parameter to be checked
 * Return: returns the last digit of a number and 0(success)
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = -l;
	}
	
	_putchar('0' + l);
	return (l);
}
