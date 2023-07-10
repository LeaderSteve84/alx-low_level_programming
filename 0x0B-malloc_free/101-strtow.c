#include "main.h"
#include <stdlib.h>
/**
 * word_len - a function that print word lenght
 * @str: a pointer to a string
 * Return: an integer
 */

int word_len(char *str);
int count_words(char *str);
char **strtowl(char *str);

int word_len(char *str)
{
	int index = 0;
	int len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - a function that counts a number of
 * words contained within a string.
 * @str: The string to be search
 * Return: The number of words contained within str.
 */

int count_words(char *str)
{
	int index = 0;
	int words = 0;
	int len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
/**
 * strtow - a function that splits a string into words.
 * @str: string that will be split.
 * Return: NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0;
	int words;
	int w;
	int letters;
	int l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));

	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
