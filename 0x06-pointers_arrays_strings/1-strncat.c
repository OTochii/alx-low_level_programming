#include "main.h"

/**
 * *_strncat - concatenates two strings using at most n bytes from src
 * @dest: string that accepts concatenated string from src
 * @src: string to be concatenated
 * @n: number of bytes used to concatenate src to dest
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
    int srcLen = 0, destLen = 0;

    while (dest[srcLen++])
        destLen++;

    for (srcLen = 0; src[srcLen] != '\0' && srcLen < n; srcLen++)
        dest[destLen++] = src[srcLen];

    return (dest);

}
