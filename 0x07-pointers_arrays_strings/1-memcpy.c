#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @mem: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *mem, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = mem[i];
									}

	return (dest);
}
