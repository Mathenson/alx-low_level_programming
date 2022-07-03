#include <stdio.h>
/**
 * main - Excepting e and q in the alphabets output
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	for (p = 'a'; p <= 'z'; p++)
	{
		if (p != 'e' && p != 'q')
			putchar(p);
	}
	putchar('\n');
	return (0);
}
