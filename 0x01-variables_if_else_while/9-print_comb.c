#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num < '9')
		{
			putchar(num);
			putchar(','+' ');
		}
		else
		{
			putchar(num);
			putchar(' ');
		}
	}
	return (0);
}
