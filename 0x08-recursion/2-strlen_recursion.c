#include "main.h"

/**
 * _strlen_recursion - print strent lenth
 *
 * Return: Return 0 if sucessful
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}

	return (1 + _strlen_recursion(s + 1));
}
