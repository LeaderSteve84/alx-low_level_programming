#include <stdio.h>
#include "main.h"
int _sqrt(int n, int a);
/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: Integer parameter of the function.
 * Return: an integer value is success.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - a function of square root.
 * @n: number integer
 * @a: iterate number
 * Return: value as natural square root.
 */

int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (a);
	return (_sqrt(n, a + 1));
}
