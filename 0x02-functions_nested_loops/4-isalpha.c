#include "main"

/**
 * isalpha - check for lower character
 * Description: this check for alphabet
 * @c: the alphabet to check
 *
 * Return: 0 if sucessful
 */

int _islower(int c)
{
	return ((if c >= 'a' && c <= 'a') || (c >= 'A' && c <= 'Z')) ;
}
