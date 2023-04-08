#include "main.h"

/**
 * binary_to_uint - cinverts a binary number to unsigned int
 * @a: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is 1 or more chars in the
 */

unsigned int binary_to_uint(const char *a)
{
	int g;
	unsigned int dec_val = 0;

	if (!a)
		return (0);

	for (g = 0; a[g]; g++)
	{
		if (a[g] < '0' || a[g] > '1')
			return (0);
		dec_val = 2 * dec_val + (a[g] - '0');
	}

	return (dec_val);
}
