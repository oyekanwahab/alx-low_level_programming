#include "main.h"

/**
 * more_numbers - print 0 to 14
 * Descriptin: 'printing of 0 to 14 ten times
 * Return: no return
 */

void more_numbers(void)
{

	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b <= 10)
			{
				_putchar('1');
				_putchar(b % 10 + '0');
			}
			else
			{
				_putchar(b);
			}
		}
		
	}
}
