#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: destination to copy to
 * @src: destination to copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


/**
 * char *_strcpy - using the function strcpy
 * char *_strcpy(char *dest, char *src){
 * strcpy(dest, src);
 * return (dest);
 * }
 */
