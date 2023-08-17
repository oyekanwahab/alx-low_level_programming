#include "main.h"

/**
 * _isupper - check for lower letter 
 * Description: check for lower letter using function isupper
 * @c: letter to be checked
 * Return: 0 if is lower and 1 if is it not
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else 
	{
		return (1);
	}
}
