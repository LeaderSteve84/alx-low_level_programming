#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string given as a parameter.
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *s;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	s = strdup(str);

	return (s);
}
