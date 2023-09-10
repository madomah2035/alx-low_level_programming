#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz"; // Use an array to store the alphabet
    int i = 0;

    do
    {
        putchar(alphabet[i]);
        i++;
    } while (alphabet[i] != '\0');

    putchar('\n'); // New line character after the loop

    return (0);
}

