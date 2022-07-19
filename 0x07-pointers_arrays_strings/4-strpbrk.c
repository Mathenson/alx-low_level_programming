#include "main.h"

/**
 * _strpbrk - searches a string for an of a set of byte
 * @s: first string
 * @accept: second string
 * Return: a pointer to the bytes in s that matches one
 * of the bytes in accept, or NULL if no such bytes found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(s + i) != '\0'; i++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
