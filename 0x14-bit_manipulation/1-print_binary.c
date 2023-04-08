#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @y: number to print in binary
 */
void print_binary(unsigned long int y)
{
	int g, count = 0;
	unsigned long int current;

	for (g = 63; g >= 0; g--)

	{
		current = y >> g;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
