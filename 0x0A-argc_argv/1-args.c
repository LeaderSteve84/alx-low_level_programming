#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: argument count.
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = argc;
	
	(void)argv;
	printf("%d\n", --i);

	return (0);
}
