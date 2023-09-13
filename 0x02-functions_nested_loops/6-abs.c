#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the parameter to be checked
 * Return: returns the absolute value of the integer or zero if the number is 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
