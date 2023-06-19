#include <stdio.h>
/**
 * main - a program that print num in base 16
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}


