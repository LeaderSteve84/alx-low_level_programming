#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: an int value that tell the no of arguement passed.
 * Return: the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, result = 0;

	va_start(numbers, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		result += va_arg(numbers, int);
	}
	va_end(numbers);
	return (result);
}
