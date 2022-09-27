#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string with substring
 * @accept: set of bytes we lookg for
 * Return: pointer to s which matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
