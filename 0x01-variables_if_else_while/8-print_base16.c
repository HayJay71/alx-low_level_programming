#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex;

	for (hex = '0'; hex <= 'f'; hex++)
	{
		if (hex > '9' && hex < 'a')
			continue;
		else
			putchar(hex);
	}
	putchar('\n');
	return (0);
}
