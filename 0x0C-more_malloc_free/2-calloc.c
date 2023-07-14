#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - a function that allocates memory
 * for an array, using malloc.
 * @nmemb: unsigned integer
 * @size: size of the array
 * Return: void (nothing)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	int l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
