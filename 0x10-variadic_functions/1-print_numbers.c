#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @separator: a const string.
 * @n: integer that count thenumber of argument.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, a;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(numbers, unsigned int);

		printf("%d", a);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
