#include <stdio.h>

/**
 * main - entry point
 *
 * return: always 0 (success)
 */
int main(void)
{
	char var;

	for (var = 'z'; var >= 'a'; var--)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
