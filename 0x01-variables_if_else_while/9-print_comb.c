#include <stdio.h>
/**
 * main - print letter with space and comma
 *
 * Return: 0 if sucessful
 *
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '10'; num++)
	{
		putchar(num);

		if (num != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
