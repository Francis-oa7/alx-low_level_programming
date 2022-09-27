#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to locate character from
 * @c: character to be located
 * Return: poiter to first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
