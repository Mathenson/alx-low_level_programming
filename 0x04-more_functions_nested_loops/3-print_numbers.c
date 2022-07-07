#include "main.h"

/**
 * print_numbers - program print out numbers
 *
 * Return:print out number 0 to 9 with a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar("\n");
}
