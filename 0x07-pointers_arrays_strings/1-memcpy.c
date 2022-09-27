#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to copy memory to
 * @src: pointer to be copied
 * @n: number of bytes of memory to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *strt = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (strt);
}
