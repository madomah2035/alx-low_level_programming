#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
		printf("\nThe last digit of %i is %i and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("\nThe last digit of %i is %i and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("\nThe last digit of %i is %i and is 0\n", n, m);
	}

	return (0);
}
