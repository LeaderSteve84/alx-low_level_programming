#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: bytes
 * Return: 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
