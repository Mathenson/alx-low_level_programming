#include "main.h"

/**
 * _isdigit - check if input is digit or not
 * @c: integer to return
 * Return: print 1 if c is of range (0 - 9) otherwise print 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <=  57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
