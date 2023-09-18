#include "main.h"

/**
 * _isalpha - it will checks for alphabetical character
 * @c: the character to be checked
 * Return: 1 for alphabetical character or else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
