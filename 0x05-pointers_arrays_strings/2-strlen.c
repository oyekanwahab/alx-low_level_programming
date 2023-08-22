#include "main.h"

/**
 * _strlen - len of a str
 * Description: 'print out lenght of string'
 * @s: String to print out lenght
 * Return: Always 0
 *
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);


}
