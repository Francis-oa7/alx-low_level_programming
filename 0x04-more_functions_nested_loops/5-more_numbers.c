#include "main.h"
/**
 * more_numbers - prints ten times 0-14
 * Return: does not return
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
