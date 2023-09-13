#include <unistd.h>

/**
 * _putchar - prints one character to the standard ouput
 *
 * Return: Always 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
