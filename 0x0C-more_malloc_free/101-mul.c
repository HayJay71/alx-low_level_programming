#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long resp = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

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
		_putchar(resp + '0');
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
		puts("Error");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				puts("Error");
				exit(98);
			}
		}

	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
