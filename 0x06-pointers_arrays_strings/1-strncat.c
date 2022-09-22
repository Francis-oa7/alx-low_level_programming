#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * @n: number of bytes to be used
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n != j)
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
