#include "main.h"

/**
 * print_array - print out word in half a string
 * Description: 'print out of every other string'
 * @a: arar to print from
 * @n: number of the array to print
 * Return: no return 
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
