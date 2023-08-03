#include "main.h"
/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: an unsigned long integer
 * Return: void (nothing)
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int lead_zeroes;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	lead_zeroes = 1;

	while (mask > 0)
	{
		if (n & mask)
		{
			putchar('1');
			lead_zeroes = 0;
		}
		else if (lead_zeroes == 0)
		{
			putchar('0');
		}
		mask >>= 1;
	}
	if (lead_zeroes)
	{
		putchar('0');
	}
}
