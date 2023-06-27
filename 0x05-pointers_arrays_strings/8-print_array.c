#include "main.h"
#include <stdio.h>

/**
 * print_array -  a function that prints n elements of an array
 * of integers, followed by a new line.
 * @a: arrays of integer
 * @n: number of element of the array to be printed
 * Return: o (success)
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		{
			if (j != (n - 1))
			printf(", ");
		}
	}
		printf("\n");
}
