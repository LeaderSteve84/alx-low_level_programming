#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: The string to be appended upon
 * @src: the string to be appended to dest
 * @n: The number of byte from src that will be appended to dest
 * Return: a pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
