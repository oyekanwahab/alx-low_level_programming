#include "main.h"

/**
 * _isupper - check for lower letter 
 * Description: check for lower letter using function isupper
 * @c: letter to be checked
 * Return: 0 if is lower and 1 if is it not
 */

int _isupper(int c)
{
	if ( c >= 97 && c <= 122)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
