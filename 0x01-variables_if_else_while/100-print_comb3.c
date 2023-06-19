#include <stdio.h>
/**
 * main - entry point
 * Return: 0 is valid
 */
int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '8')
	{
		while (j <= '9')
		{
			if (!(i > j) || i == j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = ++i + 1;
	}
return (0);
}
