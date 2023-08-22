#include "main.h"

/**
 * rev_string - print out word in reverse
 * Description: 'print out of string'
 * @s: String to print out lenght
 * Return: Always 0
 *
 */

void rev_string(char *s)
{
	int c = 0;
	int i;
	char *l = s;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		printf("%c", l[i]);
	}
	putchar('\n');
}
