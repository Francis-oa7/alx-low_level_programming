#include "main.h"
/**
 * print_to_98 - print all integers n - 98
 * @n: number to begin with
 * Return: null
 */

void print_to_98(int n)
{
	if (n > 98)
	{ 
		int i;
		while (i <= 98)
		{
			_putchar(i + '0');
			_putchar(',');
			i++;
		}
	}
	else
	{
		int i = 0;
		while (i >= 98)
		{
			_putchar(i + '0');
			_putchar(',');
			i--;
		}

	}
	_putchar('\n');
}
