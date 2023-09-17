#include "main.h"

/**
 * _isupper - the function for  uppercase letters
 * @c: character to check
 * Return: 1 for success  or 0 : for failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
