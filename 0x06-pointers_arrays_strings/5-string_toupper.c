#include "main.h"
/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @str: The string to be change.
 * Return: a pointer to the change of string.
 */

char *string_toupper(char *str)
{
	int k = 0;

	while (str[k])
	{
		if (str[k] >= 'a' && str[k] <= 'z')
			str[k] -= 32;
		k++;
	}
	return (str);
}
