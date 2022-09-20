#include "main.h"
/**
 * _strlen - retuens the len of the string
 * @s: pointer to the address of the string
 * Return: Returns length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
