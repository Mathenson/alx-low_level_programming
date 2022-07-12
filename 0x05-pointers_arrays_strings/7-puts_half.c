#include "main.h"

/**
 * puts_half - print half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int fem = 0, i;

	while (fem >= 0)
	{
		if (str[fem] == '\0')
			break;
		fem++;
	}
	
	if (fem % 2 == 1)
		i = fem / 2;
	else
		i = (fem - 1) / 2;

	for (i++; i < fem; i++)
		_putchar(str[i]);
	_putchar('\n');
}
