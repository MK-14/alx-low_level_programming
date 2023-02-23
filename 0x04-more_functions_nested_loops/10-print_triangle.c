#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle
 * @size: size parameter of a triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= j; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
