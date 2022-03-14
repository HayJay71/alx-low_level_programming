#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sml;

	for (sml = 'a'; sml <= 'z'; sml++)
	{
		if (sml == 'e' || sml == 'q')
			continue;
		else
			putchar(sml);
	}
	putchar('\n');
	return (0);
}
