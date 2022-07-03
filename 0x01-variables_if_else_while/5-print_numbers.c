#include <stdio.h>
/**
 * main - Print all single digits number of base 10 from 0 except 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lt;

	for (lt = '0'; lt <= '9'; lt++)
	{
		putchar(lt);
	}
	putchar('\n');
	return (0);
}
