#include "main.h"

/**
 * puts2 - prints all characters of a string
 * @str: pointer to string to be printed
 * Return: null
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
