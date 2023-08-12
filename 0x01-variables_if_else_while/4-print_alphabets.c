#include <stdio.h>

/**
 * main - Print using for loop.
 * Description:	'This retirate all the alphabet'
 *
 * Return: 0 if sucess
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if ( ch != 'q' && ch != 'e' )
			putchar(ch);
	putchar('\n');
	return (0);
}
