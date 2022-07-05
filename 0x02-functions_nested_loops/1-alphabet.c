#include "main.h"
/**
 * print_alphabet - Printing Alphabets
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int f;

	for (f = 97; f <= 122; f++)
	{
		_putchar(f);
	}
	_putchar('\n');
}
