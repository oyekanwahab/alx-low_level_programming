#include <stdio.h>

/**
 * main - print in base 16
 *
 * Return: 0 if sucessful
 */

int main(void)
{
	int num;
	int alp;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
