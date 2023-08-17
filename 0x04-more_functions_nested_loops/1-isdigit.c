#include "main.h"

/**
 * _isdigit - check for number
 * Description: check for number  letter using function isnumber
 * @c: letter to be checked
 * Return: 0 if is numebr  and 1 if is it not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
