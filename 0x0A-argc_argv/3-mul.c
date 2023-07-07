#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc < 3)
	{
		printf("Error\n");

	return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;
	printf("%d\n", sum);

	return (0);
}
