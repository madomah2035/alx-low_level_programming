#include "main.h"
/**
 * int _isalpha - checks for alphabets
 * @c: the parameter to be checked
 * Return: Returns 1 if alpha and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
