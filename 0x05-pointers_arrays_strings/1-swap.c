#include "main.h"

/**
 * swap_int - two pointer value
 * Description: 'change of two value'
 * @a: first value to swap
 * @b: second value to swap
 * Return: Always 0
 *
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
