#include "main.h"

/**
 * _strcpy - copies string pointed to src to the buffer
 * @dest: destination of copying
 * @src: source of string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
