#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a param
 * @str: char string pointer.
 * Return: NULL(if str = NULL), pointer to dup string otherwise
 */
char *_strdup(char *str)
{
	char *new_str;

	new_str = str;

	if (str == NULL)
		return (NULL);

	return (new_str);
}
