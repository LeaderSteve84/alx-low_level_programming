#include <stdio.h>
/**
 * main - the program ll prints alphabet in lowercase and uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
