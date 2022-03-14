#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lms;

	for (lms = 'z'; lms >= 'a'; lms--)
		putchar(lms);
	putchar('\n');
	return (0);
}
