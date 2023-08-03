#include "main.h"
/**
 * set_bit - a function that sets the value of a bit
 * to 1 at a given index.
 * @n: a pointer to an unsigned long integer value.
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	/*create a mask with the bit at the index set*/
	mask = 1UL << index;
	/*set the bit at the index tp 1 using a bitwise OR operator*/
	*n |= mask;

	return (1);
}
