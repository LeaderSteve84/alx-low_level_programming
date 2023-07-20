#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 * @format:  is a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list alltypes;

	char *separator = "";
	unsigned int i = 0;
	char ch;
	int in;
	float fl;
	char *str;

	va_start(alltypes, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				ch = va_arg(alltypes, int);
				printf("%s%c", separator, ch);
				break;
			case 'i':
				in = va_arg(alltypes, int);
				printf("%s%d", separator, in);
				break;
			case 'f':
				fl = va_arg(alltypes, double);
				printf("%s%f", separator, fl);
				break;
			case 's':
				str = va_arg(alltypes, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(alltypes);
	printf("\n");
}
