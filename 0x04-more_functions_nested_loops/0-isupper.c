#include "main.h"

/**
 * _isupper - check if the argument is lower ir upper case
 * @c: input character
 * Return: 1 if it is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
