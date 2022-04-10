#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_int - prints an integer.
 * @n: int
 * Return: 0
 */

void print_int(unsigned long n)
{
	unsigned long divisor = 1, resp;

	while (n / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor >= 1)
	{
		resp = n / divisor;
		putchar(resp + '0');
		n %= divisor;
		divisor /= 10;
	}
}

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}

	}

	print_int(atol(argv[1]) * atol(argv[2]));
	putchar('\n');

	return (0);
}
