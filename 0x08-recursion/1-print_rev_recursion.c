#include "main.h"
/**
 *_print_rev_recursion - a function that prints a string in reverse.
 *@s: a pointer with a data type char.
 *Return: void (nothing to return)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
