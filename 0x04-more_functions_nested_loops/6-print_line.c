#include "main.h"

/**
 * print_line - print line
 * Description: 'print # multiple times'
 * @n: integer to print #
 * return: no return
 */

void print_line(int n)
{
	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
