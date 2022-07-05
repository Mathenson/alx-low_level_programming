#include "main.h"
/**
 * print_last_digit - A program that print the last digit of number
 *
 * @f: - integers
 *
 * Return: return the last digit of a given number
 */
int print_last_digit(int f)
{
	int m;

	m = f % 10;
	if (f >= 0)
	{
		_putchar(m + 48);
		return (m);
	}
	else
	{
		_putchar(-m + 48);
		return (-m);
	}
}
