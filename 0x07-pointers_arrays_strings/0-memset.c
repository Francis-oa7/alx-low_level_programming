#include "main.h"

/**
 * _memset - fills memory of s with b
 * @s: pointer with memory to be filled
 * @b: character to fill memory
 * @n: number of bytes to fill
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *strt = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (strt);
}
