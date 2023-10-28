#include<stdio.h>

/**
 * main - to print the name of the program
 * Description: to print the name of program
 * @argc: count of the argument
 * @argv: vector of th argument passed to it
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
