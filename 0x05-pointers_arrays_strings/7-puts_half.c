#include "main.h"

/**
 * puts_half - print out word in half a string
 * Description: 'print out of every other string'
 * @str: String to print out lenght
 * Return: Always 0
 *
 */

void puts_half(char *str)
{
	char *l = str;
	int num = 0;
	int half;
	int i;

	while (*l != '\0')
	{
		num++;
		l++;
	}
	if (num % 2 == 0)
	{
		half = (num + 1) / 2;
		for (i = half; i <= num; i++)
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
	else
	{
		half = (num - 1) / 2;
		for (i = half; i <= num; i++)
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
}

