#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string
 * Return: the pointer to dest
 */

char *string_toupper(char *s)
{
	int lt = 0;

	while (*(s + lt) != '\0')
	{
		if ((*(s + lt) >= 97) && (*(s + lt) <= 122))
			*(s + lt) = *(s + lt) - 32;
		lt;
	}
	
	return (s);
}
