#include <stdio>
/**
 * main - main block
 * description: prints all single numbers of base 10
 * starting from 0, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
		if (c < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
