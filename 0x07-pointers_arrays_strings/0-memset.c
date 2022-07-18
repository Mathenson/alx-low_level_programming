#include "main.h"
/**
 * _memset - function that fill memory with constant bytes
 * @s: pointer that stores value
 * @b: pointer
 * @n: bytes of area to fill
 *
 * Return:the pointer to the dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
