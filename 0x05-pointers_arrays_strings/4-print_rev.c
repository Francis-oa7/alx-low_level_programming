#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: pointer to string to be reversed
 * Return: null
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
