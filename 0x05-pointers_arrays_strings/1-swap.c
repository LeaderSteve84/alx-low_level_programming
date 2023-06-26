#include <stdio.h>
#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int j = *a;
	*a = *b;
	*b = j;
}
