#include "main.h"
/**
 * print_most_numbers - prints all numbers btwn 0-9 except 2 and 4
 * Return: null
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
