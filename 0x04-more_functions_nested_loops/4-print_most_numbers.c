#include "main.h"

/**
 * print_most_numbers - print number
 * Description: 'to print single digit'
 * Return: 0 if succesful or 1 if wrong
 *
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
