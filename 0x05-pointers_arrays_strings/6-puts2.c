#include "main.h"

/**
 * puts2 - print out word in reverse
 * Description: 'print out of every other string'
 * @str: String to print out lenght
 * Return: Always 0
 *
 */

void puts2(char *str)
{
	while (*str != '\0' && *str != '.')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
