#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * argstostr -  a function that concatenates all the
 * arguments of your program.
 * @ac: integer argument parameter.
 * @av: a pointer to a pointer.
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int ch = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}
		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
