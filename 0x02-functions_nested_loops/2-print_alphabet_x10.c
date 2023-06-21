#include "main.h"
/**
 * main - print_alphabet_x10
 * Return: void
 */

int main(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
	return 0;
}
