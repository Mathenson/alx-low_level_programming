#include <stdio.h>
/**
 * main - Combining three numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, e, m;

	for (f = '0'; f <= '9'; f++)
	{
		for (e = '0'; e <= '9'; e++)
		{
			for (m = '0'; m <= '9'; m++)
			{
				if (f < e && e < m)
				{
					putchar(f);
					putchar(e);
					putchar(m);
					if (f != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
