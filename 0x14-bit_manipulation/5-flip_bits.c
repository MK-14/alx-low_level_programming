#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @y: first number
 * @f:second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int y, unsigned long int f)
{
	int g, count = 0;
	unsigned long int current;
	unsigned long int exclusive = y ^ f;

	for (g = 63; g >= 0; g--)
	{
		current = exclusive >> g;
		if (current & 1)
			count++;
	}

	return (count);
}
