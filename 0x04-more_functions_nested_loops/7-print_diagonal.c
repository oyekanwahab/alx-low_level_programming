#include "main.h"

/**
 * print_diagonal - print line
 * Description: 'print \ multiple times'
 * @n: integer to print \
 * return: no return
 */

void print_diagonal(int n)
{
	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('\\');
			n--;
		}
		_putchar('\n');
	}
}
