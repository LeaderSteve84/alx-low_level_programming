#include "main.h"
/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 * @b: a pointer of a string of 0 and 1 chars.
 * Return:  the converted number, or 0 if
 * 1, there is one or more chars in the string b that is not 0 or 1
 * 2, b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int i = 0;
	char c;

	if (b == NULL)
	{
		return (0);
	}
	for (; b[i] != '\0'; i++)
	{
		c = b[i];
		if (c == '0')
		{
			r = (r << 1);
		}
		else if (c == '1')
		{
			r = (r << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (r);
}
