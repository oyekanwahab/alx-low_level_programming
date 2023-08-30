#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: string to be filled with 
 * @b: the contant byte for filling memory 
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
