#include "main.h"
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a param
 * @str: char string pointer.
 * Return: NULL(if str = NULL), pointer to dup string otherwise
 */
char *_strdup(char *str)
{
	char *new_str;
	int index, len = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index] != '\0'; index++)
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return(NULL);
	for (index = 0; str[index] != '\0'; index++)
		duplicate[len] = '\0';

	return (new_str);
}
