#include "main.h"
#include <stdio.h>
int _prime(int n, int a);
/**
 * is_prime_number - a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: an integer value
 * Return: an integer value
 */

int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
 * _prime - a function that check if number is prime
 * @a: an integer value
 * @n: the number to be check.
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int _prime(int n, int a)
{
	if (n <= 1)
		return (0);
	if (n % a == 0 && a > 1)
		return (0);
	if ((n / a) < a)
		return (1);
	return (_prime(n, a + 1));
}

