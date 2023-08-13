#include <stdio.h>

/**
 *main - print lowercase
 *
 *Return: 0 if sucessful
 */

int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let--)
		putchar(let);
	putchar('\n');
	return (0);
}
