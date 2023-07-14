#include "main.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: a pointer s1
 * @s2: a pointer s2
 * Return: return a string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	i++;
	while (s2[j])
		j++;
	l = i + j;
	s = malloc((sizeof(char) * l) + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
