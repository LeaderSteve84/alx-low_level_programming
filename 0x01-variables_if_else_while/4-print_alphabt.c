#include <stdio.h>
/**
 * main - The program will print alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i == 'e' || i == 'g')
	{
		i += 1;
	}
		else
		{
			putchar(i);
			i += 1;
		}
	}
	putchar('\n');
	return (0);
}



