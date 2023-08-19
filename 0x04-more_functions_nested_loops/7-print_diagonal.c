#include "main.h"

/**
 * print_diagonal - print line
 * Description: 'print \ multiple times'
 * @n: integer to print \
 * return: no return
 */

void print_diagonal(int n)
{

	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
