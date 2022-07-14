#include "main.h"

/**
 * *_strcat - concatenates two strings and overwrites the
 * null byte at the end of dest, and adds null byte after
 * concartenation.
 * @dest: string that accepts concartenated string from src
 * @src: string to be concartenated
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	for (j - 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (*dest);
}
