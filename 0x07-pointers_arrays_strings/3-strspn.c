#include "main.h"

/**
 * _strspn - gets length of a prefix in a substring
 * @s: string with target substring
 * @accept: target substring
 * Return: number of bytes of substrings
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
