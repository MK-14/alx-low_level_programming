#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @y: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *y, unsigned int index)
{
	if (index > 63)
		return (-1);

	*y = (~(1UL << index) & *y);
	return (1);
}
