#include "main.h"

/**
 * _strcpy - copy string
 * Description: 'print out of every other string'
 * @dest: arar to print from
 * @src: number of the array to print
 * Return: no return 
 *
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
