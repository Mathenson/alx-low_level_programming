#include "main.h"

/**
 * puts2 - print every other character ofa string, starting with the first character
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
