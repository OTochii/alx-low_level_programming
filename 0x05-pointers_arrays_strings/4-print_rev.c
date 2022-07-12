#include "main.h"

/**
 * print_rev - prints a string in reverse using pointers,
 * followed by a new line.
 * @s: string input.
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i, n;
	int fcount = 0;

	for (i = 0; s[i] != '\0'; i++)
		fcount++;

	for (n = (fcount - 1); n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}
