#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("n is a negative number: %d\n", n);
	else if (n == 0)
		printf("n is zero: %d\n", n);
	else if (n > 0)
		printf("n is is a positive number: %d\n", n);

	return (0);
}

