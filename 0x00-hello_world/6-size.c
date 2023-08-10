#include <stdio.h>

/**
 * main - this print out size of all types
 *
 * Return: Always 0
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long));
	printf("Size of long long int: %d bytes(s)\n", sizeof(long long));
	printf("Size of float: %d bytes(s)\n", sizeof(float));
	return (0);
}
