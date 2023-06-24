#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	long int fibonacci[50];

	fibonacci(0) = 1;
	fibonacci(1) = 2;
	printf("%ld, %ld, ", fibonacci[i - 1] + fibonacci[i - 2];

			for (i = 2; i < 50; i++)
			{
			fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
			if (i == 49)
			{
			printf("%ld\n", fibonacci[i]);
			}
			else
			{
			printf("%ld, ", fibonacci[i]);
			}
			}
}
