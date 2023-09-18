#include "main.h"
/**
 * _abs - it compute the absolute valu of an integer
 * @c: The number to the computer
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

