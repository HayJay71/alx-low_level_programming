#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sml, caps;

	for (sml = 'a'; sml <= 'z'; sml++)
		putchar(sml);
	for (caps = 'A'; caps <= 'Z'; caps++)
		putchar(caps);
	putchar('\n');
	return (0);
}
