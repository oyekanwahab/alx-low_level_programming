#include "main.h"

/**
 * _puts - print out word
 * Description: 'print out of string'
 * @str: String to print out lenght
 * Return: Always 0
 *
 */

void _puts(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
	}
	else 
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str ++;
		}
		_putchar('\n');
	}
}
