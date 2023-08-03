#include "main.h"
/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: an unsigned long int value
 * @m: an unsigned long integer value
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count_num = 0;

	xor_result = n ^ m;
	while (xor_result)
	{
		count_num += xor_result & 1;
		xor_result >>= 1;
	}
	return (count_num);
}
