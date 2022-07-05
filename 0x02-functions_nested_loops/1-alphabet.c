#include "main.h"
/**
 * main - Printing Alphabets
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int f;

	for (f = "a"; f <= "z"; f++)
	{
		_putchar(f);
	}
	_putchar('\n');
}
