#include<stdio.h>
#include "main.h"

/**
 * _puts_recursion - for print out letter
 * @s: string
 * Return: 1 on sucess
 *
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_putchar(s + 1);
}
