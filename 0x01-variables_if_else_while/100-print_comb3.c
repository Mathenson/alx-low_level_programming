#include <stdio.h>
/**
 * main - print possible combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	while (a ='0'; a <= '9'; a++)
	{
		while (b = '0'; b <= '9'; b++)
		{

			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8' || (a == '8' && b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
