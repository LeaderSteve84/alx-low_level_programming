#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: a pointer to the first first string
 * @s2: a pointer to the second strings
 * Return: If str1 < str2, the neative difference
 * of the first unmatched character.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

