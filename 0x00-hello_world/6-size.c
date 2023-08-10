#include <stdio.h>

/**
 *  Main : this print out size of all types
 *
 * Return: Alwasys 0
 */

int main(void)
{
	printf("Size of a char:%d  byte(s)", sizeof(char));
	printf("Size of int: %d byte(s)", sizeof(int));
	printf("Size of a long int:%d bytes(s)", sizeof(long));
	printf("Size of long long :%d bytes(s)", sizeof(long long));
	printf("Size of long float:%d bytes(s)", sizeof(float));
}
