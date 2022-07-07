#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * Return: void
 */
void print_line(int n)
{
	int i;
	
	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
