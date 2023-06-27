#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generate valid password randomly
 * for the task 101-crackme.
 * Return: 0 (success)
 */

int main(void)
{
	char password[84];
	int ind = 0, sum = 0, d_h1, d_h2;

	srand(time(0));
	while (sum < 2772)
	{
		password[ind] = 33 + rand() % 94;
		sum += password[ind++];
	}
	password[ind] = '\0';
	if (sum != 2772)
	{
		d_h1 = (sum - 2772) / 2;
		d_h2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			d_h1++;

		for (ind = 0; password[ind]; ind++)
		{
			if (password[ind] >= (33 + d_h1))
			{
				password[ind] -= d_h1;
				break;
			}
		}
		for (ind = 0; password[ind]; ind++)
		{
			if (password[ind] >= (33 + d_h2))
			{
				password[ind] -= d_h2;
			break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
