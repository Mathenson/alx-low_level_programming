#include "main.h"

/**
 * puts2 - print one char out of 2 of string
 * @str: input string
 * Return: no return
 */
void puts2(char *str)
{
	int l = 0;

	while (l >= 0)
	{
		if (str[l] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (l % 2 == 0)
			_putchar(str[l]);
		l++;
	}
}
