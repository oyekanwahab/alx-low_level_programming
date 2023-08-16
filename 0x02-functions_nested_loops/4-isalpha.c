#include "main.h"

/**
 * _islower - checks for lowercase character
 * Description: 'check for alphabet'
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
