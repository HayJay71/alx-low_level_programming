#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, u, m;

	for (n = '0'; n < '8'; n++)
	{
		for (u = '1'; u < '9'; u++)
		{
			for (m = '2'; m <= '9'; m++)
			{
				if (m > u && u > n)
				{
					putchar(n);
					putchar(u);
					putchar(m);
					if (n != '7' || u != '8' || m != '9')
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
